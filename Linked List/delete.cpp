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
    void insertathead(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        temp->next=head;
        head=temp;
        size++;
    }
    void insertatend(int val){
        Node* temp=new Node(val);
        if(size==0) head=tail=temp;
        tail->next=temp;
        tail=temp;
        size++;
    }
    void display(){
        Node* temp=head;
        while(temp!=0){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void insertatidx(int idx,int val){
        Node* t=new Node(val);
        Node* temp=head;
        if(idx==0) insertathead(val);
        else if(idx==size) insertatend(val);
        else if(idx<0 || idx>size){
            cout<<"Invalid"<<endl;
            return;
        }
        else{
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            size++;
        }
    }
    void deleteathead(){
        if(size==0){
            cout<<"Invalid"<<endl;
            return;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteattail(){
        if(size==0){
            cout<<"INVALID"<<endl;
            return;
        }
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
    void deleteatidx(int idx){
        if(idx==0) deleteathead();
        else if(idx==size-1) deleteattail();
        else if(idx<0 || idx>=size) {
            cout<<"INVALID"<<endl;
            return;
        }
        else{
            Node* temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
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
    ll.insertatend(70);
    ll.display();
    ll.deleteathead();
    ll.display();
    ll.deleteattail();
    ll.display();
    ll.deleteatidx(2);
    ll.display();
}