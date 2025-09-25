#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool check(string s){
    stack<char>st;
    if(s.length()%2!=0) return false;
    for(int i=0;i<s.length();i++){
    char c=s[i];
    if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
    else{
        if(st.size()==0) return false;
        if((c==')' && st.top()!='(') || (c==']' && st.top()!='[') || (c=='}' && st.top()!='{')){
            return false;
        }
        st.pop();
        }
    }
    if(st.size()==0) return true;
    return false;
}
int main(){
    string s;
    cin>>s;
    cout<<check(s);
}