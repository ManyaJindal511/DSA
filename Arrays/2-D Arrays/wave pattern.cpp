#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> printwave(vector<vector<int>>& v) {
    vector<vector<int>> wavepattern;
    int r = v.size();
    int c = v[0].size();

    for (int j = 0; j < c; j++) {
        vector<int> column;
        if (j % 2 == 0) {
            for (int i = 0; i < r; i++) {
                cout << v[i][j] << ' ';
                column.push_back(v[i][j]);
            }
        } 
        else {
            for (int i = r - 1; i >= 0; i--) {
                cout << v[i][j] << " ";
                column.push_back(v[i][j]);
            }
        }
        wavepattern.push_back(column);
    }

    return wavepattern;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
        }
    }

    vector<vector<int>>wavepattern =printwave(v);

    return 0;
}
