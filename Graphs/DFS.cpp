#include<iostream>
#include<vector>
using namespace std;
void DFS(vector<vector<int>>&adj,int src,vector<bool>&vis){
    vis[src]=1;
    cout<<src<<" ";
    for(int a:adj[src]){
        if(!vis[a]){
            DFS(adj,a,vis);
        }
    }
}
int main(){
    int e,v;
    cin>>e>>v;
    vector<vector<int>>adj(v);
    for(int i=0;i<e;i++){
        int x,z;
        cin>>x>>z;
        adj[x].push_back(z);
    }
    int src;
    cin>>src;
    vector<bool>vis(v,0);
    DFS(adj,src,vis);
    return 0;
}