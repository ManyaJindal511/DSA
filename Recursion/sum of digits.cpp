#include<iostream>
using namespace std;
int sum(int n){
    //base case
    if(n>=0 && n<=9){
        return n;
    }
    return sum(n/10)+n%10;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}