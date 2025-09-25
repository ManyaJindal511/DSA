#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isomorphic(string s,string s1){
    vector<int> v(128,-1);
    vector<int> v1(128,-1);
    if(s.size()!=s1.size()){
        return false;
    }
    else{
        for(int i=0;i<s.size();i++){
            if(v[s[i]]!=v1[s1[i]]){
                return false;
            }
            v[s[i]]=v1[s1[i]]=i;
        }
    }
    return true;
}
int main(){
    string s,s1;
    cin>>s>>s1;
    if(isomorphic(s,s1)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}