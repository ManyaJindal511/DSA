#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
class Node{
public:
    int val;
    Node* right;
    Node* left;
    Node(int val){
        this->val=val;
        this->right=NULL;
        this->left=NULL;
    }
};
void display(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    display(root->right);
    display(root->left);
}
int maxval(Node* root){
    if(root==NULL) return INT16_MIN ;
    int ml=maxval(root->left);
    int mr=maxval(root->right);
    return max(root->val,max(ml,mr));
}
int main(){
    Node* a=new Node(-1);
    Node* b=new Node(-2);
    Node* c=new Node(-3);
    Node* d=new Node(-8);
    Node* e=new Node(-5);
    Node* f=new Node(-6);
    Node* g=new Node(-7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    display(a);
    cout<<endl;
    cout<<maxval(a)<<endl;
}