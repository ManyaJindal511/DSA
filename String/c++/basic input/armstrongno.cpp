#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int orig=n;
    while (n>0){
        sum=sum+(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(sum==orig){
        cout<<"armstrong no";
    }
    else{
        cout<<"na";
    }
    return 0;
    }