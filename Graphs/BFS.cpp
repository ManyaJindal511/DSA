#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void bfs(vector<vector<int>>&adj,int src,int v){
    vector<bool>vis(v,0);
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while(!q.empty()){
        int c=q.front();
        q.pop();
        cout<<c<<" ";
        for(int a:adj[c]){
            if(!vis[a]) {
                vis[a]=true;
                q.push(a);
            }
        }
    }
}
int main(){
    int e,v;
    cin>>e>>v;
    vector<vector<int>>adj(v);
    for(int i=0;i<e;i++){
        int u,z;
        cin>>u>>z;
        adj[u].push_back(z);
    }
    int src;
    cin>>src;
    bfs(adj,src,v);
    return 0;
}