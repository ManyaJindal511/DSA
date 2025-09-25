#include<iostream>
#include<vector>
using namespace std;
vector<int> pro(vector<int>&v){
    int n=v.size();
    vector<int> left_prod(n);
    vector<int> right_prod(n);
    vector<int> ans(n);
    left_prod[0]=1;
    int p=v[0];
    //[1,2,3,4] here p=1
    for(int i=1;i<n;i++){
        left_prod[i]=p; // [1,1,2,6]
        p*=v[i];  
    }
    right_prod[n-1]=1;
    int p1=v[n-1];
    //[1,2,3,4] here p1=4
    for(int i=n-2;i>=0;i--){
        right_prod[i]=p1;// [24,12,4,1]
        p1*=v[i];       
    }
    for(int i=0;i<n;i++){
        ans[i]=left_prod[i]*right_prod[i];
        cout<<ans[i]<<" ";
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ans =pro(v);
    return 0;
}