//max steps can be 3
#include<iostream>
using namespace std;
int stairs(int n){
    if(n==3) return 4;
    if(n==2) return 2;
    if(n==1) return 1;
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int main (){
    int n;
    cin>>n;
    cout<<stairs(n);
}