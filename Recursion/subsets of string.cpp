#include<iostream>
#include<string>
#include<vector>
using namespace std;
void subsets(string ans,string orig,vector<string>&v){
    if(orig==""){
        v.push_back(ans);
        return;
    }
    char ch=orig[0];
    subsets(ans,orig.substr(1),v);//if we take example of string-abc then here in ans empty string is stored that is a and in orig bc is stored
    subsets(ans+ch,orig.substr(1),v);//similarly here if we take example of string-abc then here in ans a is stored and in orig bc is stored and the process continues further when the function is called
}
int main(){
    string str;
    getline(cin,str);
    vector<string>v;
    subsets("",str,v);
    for(string ele:v){
        cout<<"["<<ele<<"]";
    }
}