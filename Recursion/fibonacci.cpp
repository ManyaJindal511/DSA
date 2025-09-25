//to return the nth fibonacci
//ex-> if n=4 then output should be 3
#include<iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}