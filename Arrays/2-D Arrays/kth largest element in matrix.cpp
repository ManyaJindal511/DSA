#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int small(vector<vector<int>>&v,int k){
    vector<int>ans;
    int n=v.size();
    int m=v[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ans.push_back(v[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    int a=n*m;
    return ans[a-k];
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int k;
    cin>>k;
    cout<<small(v,k);
    return 0;
}