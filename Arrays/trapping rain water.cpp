#include<iostream>
#include<vector>
using namespace std;
int water(vector<int>&v){
    int n=v.size();
    //previous greater element
    int prev[n];
    prev[0]=-1;
    int max=v[0];
    for(int i=1;i<n;i++){
        prev[i]=max;
        if(v[i]>max){
            max=v[i];
        }
    }
    //next greater element
    int next[n];
    next[n-1]=-1;
    int max1=v[n-1];
    for(int i=n-2;i>=0;i--){
        next[i]=max1;
        if(v[i]>max1){
            max1=v[i];
        }
    }
    //minimum element in two
    for(int i=0;i<n;i++){
        prev[i]=min(prev[i],next[i]);
    }
    int water=0;
    for(int i=0;i<n;i++){
        if(v[i]<prev[i]){
            water+=prev[i]-v[i];
        }
    }
    return water;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<water(v);
    return 0;
}