#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int>&s){
    stack<int>temp;
    //stack<int>get;
    while(s.size()>0){
        temp.push(s.top());
        s.pop();
    }
    s.push(70);
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
}
void print(stack<int>s){
    while(s.size()>0){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
void pushatidx(stack<int>&s,int idx,int val){
    stack<int>temp;
    while(s.size()>idx){
        temp.push(s.top());
        s.pop();
    }
    s.push(val);
    while(temp.size()>0){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    pushatidx(s,2,90);
    print(s);
    pushatbottom(s);
    print(s);
}