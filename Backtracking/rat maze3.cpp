#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int N = 5; // Size of the maze, you can change this according to your maze size

// Function to print the paths
void printPaths(const vector<string>& paths) {
    for (const string& path : paths) {
        cout << path << endl;
    }
}

// Function to check if the current cell is valid to move
bool isSafe(const vector<vector<int>>& maze, int x, int y, vector<vector<bool>>& visited) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
}

// Recursive function to find all possible paths
void findAllPathsUtil(const vector<vector<int>>& maze, int x, int y, vector<vector<bool>>& visited, string& path, vector<string>& paths) {
    // If the rat reaches the destination, add the path to the result
    if (x == N - 1 && y == N - 1) {
        paths.push_back(path);
        return;
    }

    // Check if the current cell is valid
    if (isSafe(maze, x, y, visited)) {
        // Mark the current cell as visited
        visited[x][y] = true;

        // Move right
        path.push_back('R');
        findAllPathsUtil(maze, x, y + 1, visited, path, paths);
        path.pop_back();

        // Move down
        path.push_back('D');
        findAllPathsUtil(maze, x + 1, y, visited, path, paths);
        path.pop_back();

        // Move left
        path.push_back('L');
        findAllPathsUtil(maze, x, y - 1, visited, path, paths);
        path.pop_back();

        // Move up
        path.push_back('U');
        findAllPathsUtil(maze, x - 1, y, visited, path, paths);
        path.pop_back();

        // Backtrack
        visited[x][y] = false;
    }
}

// Function to find all possible paths
void findAllPaths(const vector<vector<int>>& maze) {
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    vector<string> paths;
    string path;

    findAllPathsUtil(maze, 0, 0, visited, path, paths);

    if (paths.empty()) {
        cout << "No paths found." << endl;
    } else {
        cout << "All possible paths from source to destination:" << endl;
        printPaths(paths);
    }
}

int main() {
    // Example maze (1 represents open path, 0 represents blocked path)
    vector<vector<int>> maze = {
        {1, 0, 0, 0, 0},
        {1, 1, 0, 1, 0},
        {0, 1, 1, 0, 0},
        {0, 1, 1, 1, 1},
        {0, 0, 0, 1, 1}
    };

    findAllPaths(maze);

    return 0;
}
