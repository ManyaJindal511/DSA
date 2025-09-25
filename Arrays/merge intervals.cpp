#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> pairs(vector<vector<int>>&v){
    sort(v.begin(),v.end());
    int a=v[0][0];
    int b=v[0][1];
    vector<vector<int>>ans;
    for(auto i:v){
        if(i[0]>b){
            ans.push_back({a,b});
            a=i[0];
            b=i[1];
        }
        else if(i[1]>b){
            b=i[1];
        }
    }
    ans.push_back({a,b});
    return ans;
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
    vector<vector<int>>ans=pairs(v);
    for (auto interval : ans) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
}