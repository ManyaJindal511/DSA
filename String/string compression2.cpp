#include <iostream>
#include <vector>
#include <string>
using namespace std;

int compress(vector<char>& chars) {
    int ansIndex = 0;
    int n = chars.size();

    for (int i = 0; i < n; ) {
        int j = i + 1;
        while (j < n && chars[i] == chars[j]) {
            j++;
        }

        chars[ansIndex++] = chars[i];
        int count = j - i;
        if(count>1){
            string cnt = to_string(count);
            for (char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }

        i = j;
    }

    return ansIndex;
}

int main() {
    int n;
    cin >> n;
    vector<char> chars(n);
    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }
    int compressedSize = compress(chars);

    for (int i = 0; i < compressedSize; i++) {
        cout << chars[i];
    }

    return 0;
}
