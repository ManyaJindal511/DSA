#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    //Method 1: To insert the elements
    pair<string,int>p1;
    p1.first="manya";
    p1.second=5;
    m.insert(p1);
    //Method 2: To insert the elements
    m["Manya"]=511;
    m["jindal"]=78;
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    m.erase("Manya");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
}