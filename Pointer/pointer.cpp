#include<iostream>
using namespace std;
int main(){
    int x=28;
    int *ptr1=&x;
    // adress stored in pointer
    cout<<ptr1<<" ";
    // value stored in pointer
    cout<<*ptr1;
    return 0;
}