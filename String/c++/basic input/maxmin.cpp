#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int maxNo=-1232323;//Taking any possible minimum no
    int minNo=23277282;//taking any possible maximum no
    for (int i=0; i<n; i++){
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }
    cout<<"max no is"<<maxNo<<endl;
    cout<<"min no is"<<minNo<<endl;
    
    return 0;
}