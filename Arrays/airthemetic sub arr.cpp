/* TO FIND THE MAXIMUM LENGTH OF THE AIRTHEMETIC SUBARRAY IN A GIVEN ARRAY
EX-[2,3,4,6,8,10,34] HERE MAX LENGTH=4 AND SUB ARRAY IS=[4,6,8,10]*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int j=2;
    int ans=2;
    int pd=arr[1]-arr[0];
    int curr=2;
    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}