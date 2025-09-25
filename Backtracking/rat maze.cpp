#include<iostream>
#include<vector>
using namespace std;
bool isSafe(vector<vector<int>>&v,int x,int y,int n){
    if(x<n && y<n && v[x][y]==1){
        return true;
    }
    return false;
}
bool ratMaze(vector<vector<int>>&v,int x,int y,int n,vector<vector<int>>&sol){
    if(x==n-1 && y==n-1){
        sol[x][y]=1;
        return true;
    }
    if(isSafe(v,x,y,n)){
        sol[x][y]=1;
        if(ratMaze(v,x+1,y,n,sol)){
            return true;
        }
        if(ratMaze(v,x,y+1,n,sol)){
            return true;
        }
        sol[x][y]=0; //backtracking
        return false;
    }
    return false;
}
int main(){
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));

    // Input maze matrix
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }

    vector<vector<int>> sol(n, vector<int>(n, 0));

    if(ratMaze(v, 0, 0, n, sol)){
        // Output the solution matrix
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << sol[i][j] << " ";
            }
            cout << "\n"; // Add newline after each row
        }
    } 
    else {
        cout << "No solution exists.";
    }

    return 0;
}
