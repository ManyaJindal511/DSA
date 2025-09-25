#include<iostream>
#include<vector>
#include<list>
using namespace std;
void add_edge(int src, int dest, int wt, vector<list<pair<int, int>>>& graph, bool bidir) {
    graph[src].push_back({dest, wt});
    if (bidir) {
        graph[dest].push_back({src, wt});
    }
}
void display(vector<list<pair<int, int>>>& graph) {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << "->";
        for (auto ele : graph[i]) {
            cout << "(" << ele.first << ", " << ele.second << ") ";
        }
        cout << endl;
    }
}
int main() {
    int v; 
    cin >> v;
    int e; 
    cin >> e;
    vector<list<pair<int, int>>> graph(v);
    while (e--) {
        int s, d, wt;
        cin >> s >> d >> wt; 
        add_edge(s, d, wt, graph, true); 
    }
    display(graph); 
    return 0;
}
