#include<iostream>
using namespace std;
long long merge(int arr[],int l,int mid,int r){
    long long inv=0;
    int an=mid-l+1;
    int bn=r-mid;
    //create 2 temp arrays
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[l+i];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i<an && j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
            inv+=an-i;
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
    return inv;
}

long long mergesort(int arr[],int l,int r){
    long long inv=0;
    if(l<r){
    int mid=(l+r)/2;
    inv+=mergesort(arr,l,mid);
    inv+=mergesort(arr,mid+1,r);
    inv+=merge(arr,l,mid,r);
    }
    return inv;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergesort(arr,0,n-1);
    return 0;
}