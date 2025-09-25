//the input is 3[b2[ca]] the output will be bcacabcacabcaca
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
string decodeString(string s){
    string result="";
    //traversing the encoded string
    for(int i=0;i<s.size();i++){
        if(s[i]!=']'){
            result.push_back(s[i]);
        }
        else{
            //extract str from result
            string str="";
            while(!result.empty() && result.back()!='['){
                str.push_back(result.back());
                result.pop_back();
            }
            //reversing the str
            reverse(str.begin(),str.end());
            //remove the last char from result which is [
            result.pop_back();
            //extract num from result
            string num="";
            while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                num.push_back(result.back());
                result.pop_back();
            }
            //reversing the num string
            reverse(num.begin(),num.end());
            //convert string to integer
            int int_num=stoi(num);
            //inserting str in result int_num times
            while(int_num){
                result+=str;
                int_num--;
            }
        }
    }
    return result;
}
int main(){
    string s;
    cin>>s;
    cout<<decodeString(s);
    return 0;
}