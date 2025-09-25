#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int h;
    cin>>h;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
            if((i+j)%2==0){
                cout<<p<<" ";
            }
            else{
                cout<<h<<" ";
            }
        }cout<<endl;
    }
    return 0;
}