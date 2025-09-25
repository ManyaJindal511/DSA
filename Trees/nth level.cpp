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
void nlevel(Node* root,int curr,int level){
    if(root==NULL) return;
    if(curr==level) cout<<root->val<<" ";
    nlevel(root->left,curr+1,level);
    nlevel(root->right,curr+1,level);
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
    nlevel(a,1,3);
    cout<<endl;
}