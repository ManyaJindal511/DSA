/*To search the index of first and last occurence of an element using linear search
ex-[1,1,2,2,2,3,4,4]
here the index of first occurence of 2 is 2
and the index of last occurence is 4 */
#include<iostream>
using namespace std;
int f(int a[],int n,int key){
 for(int i=0;i<n;i++){
        if(a[i]==key){
           return i;
        }
    }
    return -1;

}
int l(int a[],int n,int key){
    for(int i=n-1;i>=0;i--){
        if(a[i]==key){
        return i;
        }
}return -1;
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
    cout<<f(a,n,key)<<" ";
    cout<<l(a,n,key);
    return 0;
}