//******important note -> each element can be used multiple number of times
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
    if(target<0) return;//[2,3,5]

    for(int i=idx;i<n;i++){//here i=idx as we will take one element only once ex-[2,3,5] if 2 is already chosen than next time 3 has to be chosen no need of 2
        ans.push_back(v[i]);//push back 2
        comb(ans,v,target-v[i],i);//here instead of idx we will call i which is the call will be for current index if index is 1 then 3 will be called directly to avoid overwritting as if we call 2 then 3 and if we call 3 than 2 it is same only
        ans.pop_back();//remove 2 so that the next element 3 is chosen
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