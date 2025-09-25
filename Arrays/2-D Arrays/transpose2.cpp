/*Transpose without using extra space*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> v(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++){
//here j approaches from 0 to less than i and will only swap the lower triangle that is below diagonal as at i=j diagonal elements are present 
/*a=[1,2,3
     4,5,6
     7,8,9]
     transpose of a=[1,4,7
                     2,5 8
                     3,6,9]*/
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}