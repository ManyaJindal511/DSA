/* You are initially positioned at the array's first index, 
and each element in the array represents your maximum jump length at that position.*/

#include<iostream>
#include<vector>
using namespace std;
bool canJump(vector<int>& nums) {
        int maxIdx = nums[0];
        int n=nums.size();
        for (int i = 0; i < n; ++i) {
            if (maxIdx >= n - 1) return true;

            if (nums[i] == 0 and maxIdx == i) return false;

            if (i + nums[i] > maxIdx) maxIdx = i + nums[i];
        }
        return true;
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<canJump(nums);
}