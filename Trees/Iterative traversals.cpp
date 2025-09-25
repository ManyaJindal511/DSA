#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
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
    stack<Node*>s;
    s.push(root);
    while(s.size()>0){
        Node* temp=s.top();
        s.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL) s.push(temp->right);
        if(temp->left!=NULL) s.push(temp->left);
    }
    cout<<endl;
}
void Postorder(Node* root,vector<int>&ans){
    stack<Node*>s;
    s.push(root);
    while(s.size()>0){
        Node* temp=s.top();
        s.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL) s.push(temp->left);
        if(temp->right!=NULL) s.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
void Inorder(Node* root){
    stack<Node*> s;
    Node* at = root;
    while(at != NULL || !s.empty()){
        while(at != NULL){
            s.push(at);
            at = at->left;
        }
        at = s.top();
        s.pop();
        cout << at->val << " ";
        at = at->right;
    }
    cout << endl;
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
    vector<int>ans;
    Preorder(a);
    Postorder(a,ans);
    Inorder(a);
}