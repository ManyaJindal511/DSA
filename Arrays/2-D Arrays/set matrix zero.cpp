#include<iostream>
#include<vector>
using namespace std;
void zero(vector<vector<int>>&v){
    int n=v.size();
    int m=v[0].size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(v[i][j]==0){
                ans.push_back({i,j});
            }
        }
    }
    for(auto p:ans){
        int row=p[0];
        int col=p[1];
        for(int i=0;i<n;i++){
            v[i][col]=0;
        }
        for(int i=0;i<m;i++){
            v[row][i]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    zero(v);
    return 0;
}