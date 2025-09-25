//Constructing a binary tree using ARRAY and printing using BFS
#include<iostream>
#include<queue>
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
Node* construct(int arr[],int n){
    queue<Node*>q;
    Node* root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n){
        Node* temp=q.front();
        q.pop();
        Node* l;
        Node* r;
        if(arr[i]!=INT16_MIN) l=new Node(arr[i]);
        else l=NULL;
        if(j!=n && arr[j]!=INT16_MIN) r=new Node(arr[j]);
        else r=NULL;
        temp->left=l;
        temp->right=r;
        if(l!=NULL) q.push(l);
        if(r!=NULL) q.push(r);
        i+=2;
        j+=2;
    }
    return root;
}
//Left Boundary Traversal
void leftBoundary(Node* root) {
    if (root == NULL) return;
    if (root->left != NULL) {
        cout << root->val << " ";
        leftBoundary(root->left);
    } 
    else if (root->right != NULL) {
        cout << root->val << " ";
        leftBoundary(root->right);
    }
}

void leafNode(Node* root) {
    if (root == NULL) return;
    if (root->left == NULL && root->right == NULL) {
        cout << root->val << " ";
        return;
    }
    leafNode(root->left);
    leafNode(root->right);
}

void rightBoundary(Node* root) {
    if (root == NULL) return;
    if (root->right != NULL) {
        rightBoundary(root->right);
        cout << root->val << " ";
    } 
    else if (root->left != NULL) {
        rightBoundary(root->left);
        cout << root->val << " ";
    }
}
int main(){
    int arr[]={1,INT16_MIN,2,INT16_MIN,3,INT16_MIN,4,INT16_MIN,5,INT16_MIN,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    Node* root=construct(arr,n);
    cout<<root->val<<" ";
    leftBoundary(root->left);
    leafNode(root->left);
    leafNode(root->right);
    rightBoundary(root->right);
}