#include <bits/stdc++.h>
using namespace std;
struct Node  
{ 
  int data; 
  Node *left; 
  Node *right; 
  Node(int val){
      data=val;
      left=right=NULL;
  }
};
Node *LCA(Node *root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node *LCA1=LCA(root->left,n1,n2);
    Node *LCA2=LCA(root->right,n1,n2);
    if(LCA1!=NULL && LCA2!=NULL){
        return root;
    }
    if(LCA1!=NULL){
        return LCA1;
    }
    else{
        return LCA2;
    }
}
int main() {
	
	Node *root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left=new Node(7);
	root->right->right=new Node(8);
	int n1=7, n2=8;
	Node *res=LCA(root,n1,n2);
	cout<<"LCA: "<<res->data;
}
