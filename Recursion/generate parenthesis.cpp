#include<iostream>
#include<string>
#include<vector>
using namespace std;
void helper(string s,int o,int c,int n){
        if(c==n){
            cout<<s<<" ";
            return;
        }
        if(o<n){
            helper(s+'(',o+1,c,n);
        }
        if(c<o){
            helper(s+')',o,c+1,n);
        }
    }
int main(){
    int n;
    cin>>n;
    helper("",0,0,n);
}
