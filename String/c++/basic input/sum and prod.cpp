#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int prod=1;
    while (n>0){
        int a=(n%10);
        if ((a%2)==0){
            sum+=a;
        }
        else{
            prod=prod*a;
        }
        n=n/10;
     }
    cout<<sum<<endl;
    cout<<prod<<endl;
    return 0;
}