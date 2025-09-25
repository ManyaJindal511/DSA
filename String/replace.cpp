//To take a sentence as input and replace the space with @40
#include<iostream>
#include<string>
using namespace std;
string replacestr(string s){
    string temp="";
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}
int main(){
    string s;
    getline(cin,s);
    cout<<replacestr(s);
    return 0;
}