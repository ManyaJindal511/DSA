#include<iostream>
#include<vector>
using namespace std;
bool dfscycle(int src,vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&recst){
    vis[src]=1;
    recst[src]=1;
    for(int i:adj[src]){
        if(!vis[i] ){
            if(dfscycle(i,adj,vis,recst)) return true;
        }
        else if(recst[i]) return true;
    }
    recst[src]=0;
    return false;
}
bool hascycle(int v,vector<vector<int>>adj){
    vector<bool>vis(v,0);
    vector<bool>recst(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            if(dfscycle(i,adj,vis,recst)) return true;
        }
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
    if (hascycle(v,adj)) {
        cout << "Cycle detected!" << endl;
    } 
    else {
        cout << "No cycle detected!" << endl;
    }
}