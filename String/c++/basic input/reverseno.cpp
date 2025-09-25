#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverse=0;
    int num=n;
    while (n>0){
        reverse=(reverse*10)+(n%10);
        n=n/10;
    }
    cout<<reverse<<endl;
    if(num==reverse){
        cout<<"palidrome";
    }
    else{
        cout<<"not palidrome";
    }
    return 0;
}