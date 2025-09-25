/*VERY VERY IMPOSTANT FOR INTERVIEWS*/
//Used to print inorder traversal
#include<iostream>
#include<queue>
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
void MorrisTraversal(Node* root){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left!=NULL){
            Node* pred=curr->left;
            while(pred->right!=NULL && pred->right!=curr){
                pred=pred->right;
            }
            if(pred->right==NULL){
                //LINK
                pred->right=curr;
                curr=curr->left;
            }
            else{
                //pred->right==curr
                //UNLINK
                pred->right=NULL;
                cout<<curr->val<<" ";
                curr=curr->right;
            }
        }
        else{
            cout<<curr->val<<" ";
            curr=curr->right;
        }
    }
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
    MorrisTraversal(a);
}