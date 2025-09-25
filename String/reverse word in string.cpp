//To reverse each word in a string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int start = 0;
    for (int i = 0; i <= s.length(); i++) {
        // Check for space or end of string
        if (s[i] == ' ' || i == s.length()) {
            reverse(s.begin() + start, s.begin() + i);
            start = i + 1;  // Move start to the beginning of the next word
        }
    }
    cout << s << endl;
    return 0;
}
