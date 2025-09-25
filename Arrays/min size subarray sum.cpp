/*Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

/*Input: target = 7, nums = [2,3,1,2,4,3]
  Output: 2*/

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int minsize(vector<int>&v,int target){
    int n=v.size();
    int i=0;
    int j=0;
    int len=0;
    int minlen=INT_MAX;
    int sum=0;   //[2,3,1,2,4,3]
    while(j<n){
        sum+=v[j]; 
        while(sum>=target){
            len=j-i+1;
            minlen=min(minlen,len);//as all are positive integers if we got the min len from one element suppose 2 in above given example so we will now delete it from sum check whether the other elements in the same length can give the sum greater then or equal to target
            sum-=v[i];//as the min length from the element at ith index is returned so we will delete it from sum
            i++;//and increment i
        }
        j++;
    }
    if(minlen==INT_MAX) return 0;
    return minlen;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int target;
    cin>>target;
    cout<<minsize(v,target);
    return 0;
}