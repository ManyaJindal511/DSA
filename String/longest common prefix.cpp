#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string prefix(vector<string>&s){
    sort(s.begin(),s.end());
    string str1=s[0];
    int i=0;
    string str2=s[s.size()-1];
    int j=0;
    string ans="";
    while(i<str1.size() && j<str2.size()){
        if(str1[i]==str2[j]){
            ans+=str1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    cout<<prefix(s);
    return 0;
}