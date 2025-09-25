/*Each element nums[i] represents the maximum length of a forward jump from index i. 
In other words, if you are at nums[i], you can jump to any nums[i + j] 
Return the minimum number of jumps*/

#include<iostream>
#include<vector>
using namespace std;
int jump(vector<int>& nums) {
      for(int i = 1; i < nums.size(); i++)
      {
        nums[i] = max(nums[i] + i, nums[i-1]);
      }
      int ind = 0, ans = 0;;
      while(ind < nums.size() - 1)
      {
        ans++;
        ind = nums[ind];
      }
      return ans;
    }
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
}