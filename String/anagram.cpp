#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagramstr(string s,string s1){
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    if(s==s1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s,s1;
    cin>>s>>s1;
    if(anagramstr(s,s1)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}