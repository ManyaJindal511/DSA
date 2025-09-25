//to find the first missing positive number
//ex-[-1,-2,1,4,7] the output will be 2
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstMissingPositive(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n;i++){
        while(v[i]>0 && v[i]<=n && v[v[i]-1]!=v[i]){ //v[i]-1 is the correct index where the ele sould be placed
            swap(v[i],v[v[i]-1]); //v[v[i]-1]!=v[i]-> this condition checks whether the ele is present at correct index position or not
        }                         
    }
    for(int i=0;i<n;i++){
        if(v[i]!=i+1){//i+1 is the ideal ele present at that particular index 1 should be present at i+1 ie i=0
            return i+1;
        }
    }
    return n+1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<firstMissingPositive(v);
    return 0;
}