#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
string reverseword(string str){
    stringstream s(str);  //Used for breaking words
    string word; //To store individual words
    //to store words
    vector<string>temp;
    //to store the ans
    string ans="";
    //s >> word reads a word from the stringstream (s) and assigns it to the variable word. 
    //The extraction (>>) operator is used to read words from the stringstream.
    while(s>>word){
        temp.push_back(word);
    }
    for(int i=temp.size()-1;i>=0;i--){
        if(i!=0){
            ans+=temp[i]+" ";
        }
        else{
            ans+=temp[i];
        }
    }
    return ans;
}
int main(){
    string str;
    getline(cin,str);
    cout<<reverseword(str);
    return 0;
}