//in this all the non-alphanumeric characters are removed (ex-{, . : ;})
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool isPalindrome(string s) {
        string p,t;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='0'&&s[i]<='9')){
                p.push_back(s[i]);
            }
        }
        t=p;
        reverse(t.begin(),t.end());
        if(t==p){
            return true;
        }
        return false;
    }
int main(){
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
    return 0;
}