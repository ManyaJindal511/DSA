#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>>pq;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    vector<int>v;
    while(pq.size()>0){
        int x=pq.top();
        v.push_back(x);
        pq.pop();
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}