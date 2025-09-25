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
    Node* a=head;
    Node* b=head->next;
    while(b!=NULL){
        while(b!=NULL && b->val==a->val){
            b=b->next;
        }
        a->next=b;
        a=b;
        if(b!=NULL) b=b->next;
    }
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
    Node* b=new Node(10);
    Node* c=new Node(20);
    Node* d=new Node(20);
    Node* e=new Node(40);
    Node* f=new Node(80);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    linkedlist(a);
    display(a);
}