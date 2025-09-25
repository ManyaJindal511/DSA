//inserting the element at any index of linked list
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
class linkedlist{
public:
    Node* head;
    Node* tail;
    int size;
    linkedlist(){
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
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
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertatidx(int idx,int val){
        if(idx<0 || idx>size){
            cout<<"Invalid"<<endl;
            return;
        }
        else if(idx==0) insertathead(val);
        else if(idx==size) insertatend(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
};
int main(){
    linkedlist ll;
    ll.insertatend(10);
    ll.insertatend(20);
    ll.insertatend(30);
    ll.insertatend(40);
    ll.insertatend(50);
    ll.insertatend(60);
    ll.display();
    ll.insertatidx(3,90);
    ll.display();
}