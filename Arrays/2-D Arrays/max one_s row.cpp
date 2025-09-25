#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxones(vector<vector<int>> &vec){
    int max_ones=INT_MIN;
    int max_onesrow =-1;
    int cols=vec[0].size();
    for(int i=0;i<vec.size();i++){
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]==1){
                int numberofones= cols - j;
                if(numberofones>max_ones){
                    max_ones= numberofones;
                    max_onesrow=i;
                }
                break;
            }
        }
    }
return max_onesrow;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    cout<<maxones(vec);
    return 0;
}