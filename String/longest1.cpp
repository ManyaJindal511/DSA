//we will flip k zeros to 1 and return the max length with 1's
//ex-> 1110010 if k=2 ,max length will be=6 ie (111111)
//using sliding window technique
#include<iostream>
#include<string>
#include<climits>
using namespace std;
int maxlen(string s, int k){
    int zero_count=0;
    int end=0;
    int start=0;
    int max_length=0;
    for(;end<s.length();end++){
        if(s[end]=='0'){
            zero_count++;
        }
        while(zero_count>k){
            if(s[start]=='0'){
                zero_count--;
            }
            start++;
        }
        max_length=max(max_length,(end-start+1));
    }
    return max_length;
}
int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<maxlen(s,k);
    return 0;
} 