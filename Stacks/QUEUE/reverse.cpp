#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverse(queue<int>&q){
    stack<int>s;
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        q.pop();
        s.push(x);
    }
    for(int i=1;i<=n;i++){
        int a=s.top();
        s.pop();
        q.push(a);
        cout<<a<<" ";
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    reverse(q);
}