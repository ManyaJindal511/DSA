//*********important note -> in combinational sum 2 each element is used only once unlike in combinational sum 1

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void comb(vector<int>ans,vector<int>&v,int target,int idx){
    sort(v.begin(),v.end());
    int n=v.size();
    if(target==0){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target<0) return;//[2,2,3,3]

    for(int i=idx;i<n;i++){
        if(i > idx && v[i] == v[i-1]) continue; //idx will always be zero this if condition checks the duplicate elements if both the conditions in if statement are staisfied then the loop will continue and the duplicate element will not  be pushed in ans vector 
        ans.push_back(v[i]);
        comb(ans,v,target-v[i],i+1);//here current index is incremented by 1 that is i+1 to prevent the reuse of the same element in the same combination as one element is to be used only once the new element is tackled next time and not the old one
        ans.pop_back();
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    vector<int>ans;
    comb(ans,v,target,0);
}