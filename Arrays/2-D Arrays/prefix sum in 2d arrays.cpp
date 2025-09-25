/*To find the prefix sum in a 2D array using brute force approach
ex-[1,2,3
    4,5,6
    7,8,9]
l1,l2-> specifies the row no
r1,r2-> specifies the coloumn no
if (l1,r1)=(1,1) and (l2,r2)=(2,2)
then the sum of element(5,6,8,9) will be 28 */
#include<iostream>
#include<vector>
using namespace std;
int prefixsum(vector<vector<int>> &v,int l1,int r1,int l2, int r2){
    int sum=0;
    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=v[i][j];
        }
    }
    return sum;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    cout<<prefixsum(v,l1,r1,l2,r2);
    return 0;
}