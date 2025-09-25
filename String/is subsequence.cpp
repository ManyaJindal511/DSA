#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string s, string t) {
        int sp = 0;
        int tp = 0;

        while (sp < s.length() && tp < t.length()) {
            if (s[sp] == t[tp]) {
                sp++;
            }
            tp++;
        }

        return sp == s.length();   
    }
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    cout<<isSubsequence(s,t);
}