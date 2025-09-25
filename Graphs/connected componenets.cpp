#include<iostream>
#include<vector>
using namespace std;
int comp(int src,vector<vector<int>>&adj,vector<bool>&vis){
    vis[src]=1;
    int c=1;
    for(auto i:adj[src]){
        if(!vis[i]){
            c+=comp(i,adj,vis);
        }
    }
    return c;
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
    cout<<comp(src,adj,vis);
    return 0;
}