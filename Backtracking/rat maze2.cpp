#include<iostream>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int>>& v, int x, int y, int n) {
    return (x >= 0 && x < n && y >= 0 && y < n && v[x][y] == 1);
}

void ratMaze(vector<vector<int>>& v, int x, int y, int n, vector<vector<int>>& path, vector<vector<vector<int>>>& allPaths) {
    if (x == n - 1 && y == n - 1) {
        path[x][y] = 1;
        allPaths.push_back(path);
        path[x][y] = 0; // Backtrack
        return;
    }

    if (isSafe(v, x, y, n)) {
        path[x][y] = 1;

        // Explore down
        ratMaze(v, x + 1, y, n, path, allPaths);

        // Explore right
        ratMaze(v, x, y + 1, n, path, allPaths);

        path[x][y] = 0; // Backtrack
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    // Input maze matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> path(n, vector<int>(n, 0));
    vector<vector<vector<int>>> allPaths;

    ratMaze(v, 0, 0, n, path, allPaths);

    if (!allPaths.empty()) {
        // Output all solution matrices
        for (auto& sol : allPaths) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << sol[i][j] << " ";
                }
                cout << "\n";
            }
            cout << "\n"; // Add newline between solutions
        }
    } else {
        cout << "No solution exists.";
    }

    return 0;
}
