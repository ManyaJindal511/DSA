//to insert a new element at the end of the linked list
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
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    linkedlist ll;
    ll.insertatend(10);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertatend(20);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertatend(30);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertatend(40);
    ll.display();
    cout<<ll.size<<endl;
}