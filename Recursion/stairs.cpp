//we have to climb n stairs and can climb it in two ways that is either 1 step at a time or either 2 at a time
//the max no of steps that can be taken is 2 at a time
#include<iostream>
using namespace std;
int stairs(int n){
    if(n==2) return 2;
    if(n==1) return 1;
    return stairs(n-1)+stairs(n-2);
}
int main(){
    int n;
    cin>>n;
    cout<<stairs(n);
    return 0;
}