#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1;
    cin>>n1;
    int fact=1;
    int fact1=1;
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
    cout<<fact<<endl;
    
    while(n1>0){
        fact1=fact1*n1;
        n1=n1-1;
    }
    cout<<fact1<<endl;
    return 0;
}