//*********THE LARGEST NO THAT CAN BE FORMED BY A NUMERIC STRING**********//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
    return 0;
}