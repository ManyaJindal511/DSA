#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int>&s ,int val){
    if(s.size()==0){
        s.push(val);
        return;
    }
    int x=s.top();
    s.pop();
    pushatbottom(s,val);
    s.push(x);
}
void reverse(stack<int>&s){
    if(s.size()==1) return;
    int x=s.top();
    s.pop();
    reverse(s);
    pushatbottom(s,x);
}
void display(stack<int>&s){
    if(s.size()==0) return;
    int x=s.top();
    s.pop();
    display(s);
    cout<<x<<" ";
    s.push(x);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    pushatbottom(s,90);
    display(s);
    reverse(s);
    display(s);
}