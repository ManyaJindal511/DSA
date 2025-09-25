#include<iostream>
#include<vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] == 9) {
            digits[i] = 0;
        }
        else {
            digits[i]++;
            return digits;
        }
    }

    // If all digits are 9, add a new digit at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    int n;
    cout << "Enter the number of digits: ";
    cin >> n;

    vector<int> digits(n);
    cout << "Enter the digits (from most significant to least significant): ";
    for (int i = 0; i < n; ++i) {
        cin >> digits[i];
    }

    vector<int> ans = plusOne(digits);

    cout << "The result after adding one is: ";
    for (int digit : ans) {
        cout << digit << " ";
    }

    return 0;
}
