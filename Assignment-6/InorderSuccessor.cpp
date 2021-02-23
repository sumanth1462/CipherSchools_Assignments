#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
Node *findMin(Node *root){
    if(root==NULL){
        return NULL;
    }
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node *find(Node *root,int val){
    if(root==NULL){
        return NULL;
    }
    else if(root->data==val){
        return root;
    }
    else if(root->data<val){
        return find(root->right,val);
    }
    else{
        return find(root->left,val);
    }
}
Node *InorderSuccessor(Node *root,int val){
    Node *curr=find(root,val);
    if(curr==NULL){
        return NULL;
    }
    if(curr->right!=NULL){
        return findMin(curr->right);
    }
    else{
        Node *succ=NULL;
        Node *ances=root;
        while(ances!=curr){
            if(curr->data<ances->data){
                succ=ances;
                ances=ances->left;
            }
            else{
                ances=ances->right;
            }
        }
        return succ;
    }
}
int main(){
    Node *root=new Node(20);
	root->left=new Node(10);
	root->right=new Node(25);
	root->left->left=new Node(4);
	root->left->right=new Node(15);
	root->right->left=new Node(23);
	root->right->right=new Node(30);
	Node *res=InorderSuccessor(root,15);
	cout<<res->data;
}
