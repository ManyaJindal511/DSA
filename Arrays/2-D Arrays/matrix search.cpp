#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int target;
    cin>>target;
    int r=0;
    int c=m-1;
    bool found=false;
    while(r<n and c>=0){
    if(a[r][c]==target)
        found=true;
    if(a[r][c]>target){
        c--;
    }
    else{
        r++;
    }
    }
if(found){
        cout<<"element found";
    }
    else{
        cout<<"element doesnot exist";
    }
    return 0;
}