#include<iostream>
#include<string>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
    else return 2;
}
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s="2+6*4/8-3"; //Infix Expression
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        //Check if s[i] is a digit
        if(s[i]>=48 && s[i]<=57){
            val.push(s[i]-48);
        }
        else{
            //s[i] is-> *,/,+,-
            if(op.size()==0 || prio(s[i])>prio(op.top())) op.push(s[i]);
            else{// prio(s[i])<=prio(op.top())
                while(op.size()>0 && prio(s[i])<=prio(op.top())){
                    //I have to do val1 op val2
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }
    //Check if there is still any operator then perform the operation
    while(op.size()>0){
            char ch=op.top();
            op.pop();
            int val2=val.top();
            val.pop();
            int val1=val.top();
            val.pop();
            int ans=solve(val1,val2,ch);
            val.push(ans);       
        }
    cout<<val.top()<<endl;
}