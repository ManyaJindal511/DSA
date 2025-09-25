#include<iostream>
#include<string>
#include<vector>
using namespace std;
char getmaxchar(string s){
    int arr[26]={0};    
    //create an array of count of characters
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        //lowercase
        int no=0;
        if(ch>='a' && ch<='z'){
            no=ch-'a';
        }
        else{
            //uppercase
            no=ch-'A';
        }
        arr[no]++;
    }
    //find maximum occ character
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}
int main(){
    string s;
    getline(cin,s);
    cout<<getmaxchar(s);
    return 0;
}