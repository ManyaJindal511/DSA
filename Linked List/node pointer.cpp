#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
int main(){
    Node* a=new Node(10); //here a is storing a adress
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    cout<<a->next->next->next->val<<endl; // printing value of d using only a
    Node* temp=a; //here temp is storing the adress of a
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}