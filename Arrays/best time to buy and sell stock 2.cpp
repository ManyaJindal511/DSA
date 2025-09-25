#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n<=1){
        cout<<"0";
    }
    int price=0;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]){
            price+=v[i]-v[i-1];
        }
    }
    cout<<price;
}