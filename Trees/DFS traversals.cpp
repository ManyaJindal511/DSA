//DFS TRAVERSALS consists of preorder,inorder and postorder traversals
#include<iostream>
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
void Preorder(Node* root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    Preorder(root->right);
    Preorder(root->left);
}
void ineorder(Node* root){
    if(root==NULL) return ;
    ineorder(root->right);
    cout<<root->val<<" ";
    ineorder(root->left);
}
void Postorder(Node* root){
    if(root==NULL) return ;
    Postorder(root->right);
    Postorder(root->left);
    cout<<root->val<<" ";
}
int main(){
    Node* a=new Node(1);
    Node* b=new Node(2);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(6);
    Node* g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    Preorder(a);
    cout<<endl;
    ineorder(a);
    cout<<endl;
    Postorder(a);
    cout<<endl;
}