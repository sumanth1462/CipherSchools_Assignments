#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int data; 
  Node *left;
  Node *right; 
  Node(int k){
      data=k;
      left=right=NULL;
  }
};

int pre=INT_MIN;
bool isBST(Node *root)  
{  
    if (root == NULL)  
        return true;  
    
    if(isBST(root->left)==false)
        return false;
    
    if(root->data<=pre)
        return false;
    pre=root->data;
    
    return isBST(root->right);
}

int main() {
	
    Node *root = new Node(4);  
    root->left = new Node(2);  
    root->right = new Node(5);  
    root->left->left = new Node(1);  
    root->left->right = new Node(3);  
      
    if(isBST(root))  
        cout<<"It is BST";  
    else
        cout<<"Not a BST";  
          
    return 0;  
	
}
