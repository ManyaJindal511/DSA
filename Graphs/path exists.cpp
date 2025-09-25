#include<iostream>
#include<queue>
#include<vector>
using namespace std;
bool bfs(vector<vector<int>>&adj,int src,int dist,int v){
    vector<bool>vis(v,false);
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(q.size()>0){
        int c=q.front();
        q.pop();
        if(c==dist) return 1;
        for(int nbr:adj[c]){
            if(!vis[nbr]){
                vis[nbr]=true;
                q.push(nbr);
            }
        }
    }
    return false;
}
int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<int>>adj(v);
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    int src,dist;
    cin>>src>>dist;
    if(bfs(adj,src,dist,v)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}