//given two arrays and return the median of float number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>&nums2){
        // Get the sizes of both input arrays.
        int n = nums1.size();
        int m = nums2.size();

        // Merge the arrays into a single sorted array.
        vector<int> merged;
        for (int i = 0; i < n; i++) {
            merged.push_back(nums1[i]);
        }
        for (int i = 0; i < m; i++) {
            merged.push_back(nums2[i]);
        }

        // Sort the merged array.
        sort(merged.begin(), merged.end());

        // Calculate the total number of elements in the merged array.
        int total = merged.size();

        if (total % 2 == 1) {
            // If the total number of elements is odd, return the middle element as the median.
            return static_cast<double>(merged[total / 2]);
        } else {
            // If the total number of elements is even, calculate the average of the two middle elements as the median.
            int middle1 = merged[total / 2 - 1];
            int middle2 = merged[total / 2];
            return (static_cast<double>(middle1) + static_cast<double>(middle2)) / 2.0;
        }
    }
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>nums1(n);
    for(int i=0;i<n;i++){
        cin>>nums1[i];
    }
    vector<int>nums2(m);
    for(int i=0;i<m;i++){
        cin>>nums2[i];
    }
    cout<<findMedianSortedArrays(nums1,nums2);
    return 0;
}