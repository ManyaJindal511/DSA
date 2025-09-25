#include<iostream>
using namespace std;
bool isarm(int n){
    int sum=0;
    int orig=n;
    while(n>0){
        sum+=(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    return (sum==orig);
}
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isarm(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}