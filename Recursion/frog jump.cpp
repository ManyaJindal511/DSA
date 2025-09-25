//in this frog jump problem we will find the minimum cost to reach the end of array
//at a time we could only jump to i+1 or i+2

#include<iostream>
#include<climits>
using namespace std;
int f(int *h,int n,int i){
    //base case
    //if we are at last element than no need to check further
    if(i==n-1) return 0;
    //if at second last element than can take only one jump
    if(i==n-2) return f(h,n,i+1)+abs(h[i]-h[i+1]);
    //min path cost if one jump is taken or 2 jumps taken is returned
    return min(f(h,n,i+1)+abs(h[i]-h[i+1]), f(h,n,i+2)+abs(h[i]-h[i+2]));
}
int main(){
    int arr[]={10,30,40,20};
    int n=4;
    cout<<f(arr,n,0);
    return 0;
}