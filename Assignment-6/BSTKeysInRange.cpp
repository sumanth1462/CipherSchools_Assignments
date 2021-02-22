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
void BSTRange(Node *root,int n1,int n2){
    if(root==NULL){
        return;
    }
    if(n1<root->data){
        BSTRange(root->left,n1,n2);
    }
    if(n1<=root->data && n2>=root->data){
        cout<<root->data<<" ";
    }
    if(n2>root->data){
        BSTRange(root->right,n1,n2);
    }
}
int main() {
	Node *root=new Node(20);
	root->left=new Node(10);
	root->right=new Node(25);
	root->left->left=new Node(4);
	root->left->right=new Node(15);
	root->right->left=new Node(23);
	root->right->right=new Node(30);
    int n1=15, n2=23;
    BSTRange(root,n1,n2);
}
