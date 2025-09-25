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
Node* linkedlist(Node* head){
    Node* slow=head;
    Node* fast=head;
    Node* temp=head;
    while(fast!=NULL && fast->next!=NULL){
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    temp->next=slow->next;
    return head;
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    linkedlist(a);
    display(a);
}