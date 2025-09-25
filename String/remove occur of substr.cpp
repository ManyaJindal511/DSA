//To remove all the occurences of a substring 
#include<iostream>
#include<string>
using namespace std;
string substr(string s,string part){
    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s;
    getline(cin,s);
    string part;
    cin>>part;
    cout<<substr(s,part);
    return 0;
}