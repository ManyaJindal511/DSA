#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=2;
    while (n!=1){
        int rem=(n%i);
        if(rem==0){
            n=n/i;
            cout<<i<<endl;
        }
        else{
            i=i+1;
        }
    }
    return 0;
}