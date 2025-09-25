#include<iostream>
#include<vector>
using namespace std;
void subset(vector<int>&v,int n,int idx,vector<int>ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
            
        }
        cout<<endl;
        return;
    }
    //if arr is[1,2,3] then after pushing in the ans the ans becomes-[1] and v that is original vector becomes [2,3]
    subset(v,n,idx+1,ans);//excluding the first element that is the element at 0 index
    ans.push_back(v[idx]);//pushing the excluded element in the ans vector
    subset(v,n,idx+1,ans);//similarly after this the ans becomes[" "] an empty string and v that is original vector becomes [2,3]
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    subset(v,n,0,ans);
}