#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxprod(vector<int> &v){
    int a=v.size();
    int m=INT_MIN;
    int prod=1;
    for(int i=0;i<a;i++){
        prod*=v[i];
        m=max(m,prod);
        if(prod==0){
            prod=1;
        }
    }
    prod=1;
    for(int i=a-1;i>=0;i--){
        prod*=v[i];
        m=max(m,prod);
        if(prod==0){
            prod=1;
        }
    }
    return m;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<maxprod(v);
    return 0;
}