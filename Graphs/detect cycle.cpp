#include<iostream>
#include<vector>
using namespace std;
bool hascycle(int src,int parent,vector<vector<int>>&adj,vector<bool>&vis){
    vis[src]=1;
    for(int a:adj[src]){
        if(!vis[a]){
            if(hascycle(a,src,adj,vis)) return true;
        }
        else if(a!=parent) return true;
    }
    return false;
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
    cout<<hascycle(src,-1,adj,vis);
    return 0;
}