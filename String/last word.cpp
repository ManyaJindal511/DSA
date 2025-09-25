#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int lengthOfLastWord(string s) {
        int length = 0;
        bool foundWord = false;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                foundWord = true;
                length++;
            } 
            else if (foundWord) {
                break;
            }
        }
        return length;
    }
int main(){
    string s;
    getline(cin,s);
    cout<<lengthOfLastWord(s);
}