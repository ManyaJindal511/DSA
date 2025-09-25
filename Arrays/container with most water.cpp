#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxArea(vector<int>&v){
    int n=v.size();
    int left=0;
    int right=n-1;
    int maxA=0;
    while(left<right){
        int currentA=min(v[left],v[right])*(right-left);
        maxA=max(maxA,currentA);
        if(v[left]<v[right]){
            left++;
        }
        else{
            right--;
        }
    }
    return maxA;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxArea(v);
}