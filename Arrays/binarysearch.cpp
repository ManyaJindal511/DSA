#include<iostream>
using namespace std;
int binarySearch(int a[],int n,int key){
    int beg=0;
    int end=n;
    while(beg<=end){
        int mid=(beg+end)/2;
        if (a[mid]==key){
            return mid;
        }
        else if(a[mid]<key){
            return beg=mid+1;
        }
        else{
            return end=mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(a,n,key)<<endl;
    return 0;
}
