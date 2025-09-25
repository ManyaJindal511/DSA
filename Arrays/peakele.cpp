//To find the peak element using binary search
//ex-[2,4,8,7,5]-> the answer will be 8 and it's index is returned
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int peakele(vector<int> &v){
        int n = v.size();
        int low = 0;
        int high = v.size()-1;
        while(low < high){
            int mid = (low + high)/2;
            if(v[mid] > v[mid+1]){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
    return low;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<peakele(v);
    return 0;
}