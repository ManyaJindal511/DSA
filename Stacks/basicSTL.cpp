#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.size()<<endl;
    stack<int>temp;
    //printing the values of stack in reverse order
    //and pushing them in a new stack
    while(s.size()>0){
        cout<<s.top()<<" ";
        temp.push(s.top());
        s.pop();
    }
    cout<<endl;
    //printing the values of stack in original order
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
