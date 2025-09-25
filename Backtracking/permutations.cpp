#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> v, int idx) {
    if (idx == v.size()) {
        ans.push_back(v);
        return;
    }
    for (int i = idx; i < v.size(); i++) {
        swap(v[i], v[idx]);
        permute(v, idx + 1);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    permute(v, 0);

    for (auto i : ans) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
