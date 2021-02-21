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

void printKDist(Node *root,int k){
    if(root==NULL)
        return;
    
    if(k==0){
        cout<<root->data<<" ";
    }
    else{
        printKDist(root->left,k-1);
        printKDist(root->right,k-1);
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
	int k=2;
	
	printKDist(root,k);
}
