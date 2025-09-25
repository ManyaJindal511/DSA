#include<iostream>
#include<vector>
using namespace std;
void add_edge(int src,int dest,vector<vector<int>>&graph, bool bi_dir){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void display(vector<vector<int>>&graph){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"->";
        for(auto ele:graph[i]){
            cout<<ele<<",";
        }
        cout<<endl;
    }
}
int main(){
    int v;
    cin>>v;
    vector<vector<int>>graph(v);
    int e;
    cin>>e;
    while(e--){
        int s,d;
        cin>>s>>d;
        add_edge(s,d,graph,true);
    }
    display(graph);
    return 0;
}