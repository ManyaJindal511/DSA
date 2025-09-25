//USING KADANE'S ALGORITHM
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentSum=a[0]; //[7,-1,-2]
    int maxSum=a[0];     //[-1,4,5,-2]
    for(int i=1;i<n;i++){
        currentSum=max(a[i],currentSum+a[i]); //9
        maxSum=max(maxSum,currentSum);        //9
    }
    cout<<maxSum;
    return 0;
}