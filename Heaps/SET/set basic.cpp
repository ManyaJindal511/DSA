#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(4);
    s.insert(1);
    s.insert(4);
    s.insert(6);
    for(auto a:s){
        cout<<a<<" "<<endl;
    }
    int target=9;
    if(s.find(target)!=s.end()){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
}