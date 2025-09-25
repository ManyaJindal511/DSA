//to insert the element at the begining
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
class Linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display(){
        Node* temp1=head;
        while(temp1!=NULL){
            cout<<temp1->val<<" ";
            temp1=temp1->next;
        }
        cout<<endl;
    }
};
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    a->next=b;
    b->next=c;
    c->next=d;
    Linkedlist ll;
    ll.insertathead(90);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertathead(30);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertathead(70);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertathead(50);
    ll.display();
    cout<<ll.size<<endl;
}