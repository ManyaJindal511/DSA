/******************INPUT -> [7,1,5,3,6,4]*****************/
/******************OUTPUT-> 5 AS(6-1 IS 5)*/
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
    int max_price=0;
    int min_price=v[0];
    for(int i=1;i<n;i++){
        max_price=max(max_price,v[i]-min_price);
        min_price=min(min_price,v[i]);
    }
    cout<<max_price;
}