#include<iostream>
#include<string>
#include<stack>
using namespace std;
string solve(string val1,string val2,char ch){
    string v="";
    v+=val1;
    v.push_back(ch);
    v+=val2;
    return v;
}
int main() {
    string s = "79+4*8/3-"; 
    cout << s << endl;
    stack<string> val;
    for(int i = 0; i < s.length(); i++) {
        // Check if s[i] is a digit
        if(s[i]>=48 && s[i]<=57){
            val.push(to_string(s[i]-48));
        }
        else {
            // s[i] is -> *, /, +, -
            string val2=val.top();
            val.pop();
            string val1=val.top();
            val.pop();
            string ans=solve(val1,val2,s[i]);
            val.push(ans);
    }
}
cout << val.top() << endl;
    return 0;
}