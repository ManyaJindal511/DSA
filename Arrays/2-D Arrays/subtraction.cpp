#include<iostream>
using namespace std;
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int a[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    int r2,c2;
    cin>>r2>>c2;
    int b[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    int c[r1][c2];
    if(c1!=r2){
        cout<<"Subtraction is not possible";
    }
    else{
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                c[i][j]=a[i][j]-b[i][j];
            }
        }
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    }
    return 0;
}