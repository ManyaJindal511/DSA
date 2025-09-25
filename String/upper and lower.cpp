#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string s1;
    cin>>s1;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s1<<endl;
    return 0;
}