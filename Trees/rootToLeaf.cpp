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
void print(int p[],int len){
    for(int i=0;i<len;i++){
        cout<<p[i]<<" ";
    }
    cout<<endl;
}
void path(Node *root,int p[],int len){
    if(root==NULL){
        return;
    }
    p[len]=root->data;
    len++;
    if(root->left==NULL && root->right==NULL){
        print(p,len);
    }
    else{
        path(root->left,p,len);
        path(root->right,p,len);
    }
}


int main() {
	
	Node *root=new Node(10);
	root->left=new Node(20);
	root->right=new Node(30);
	root->right->left=new Node(40);
	root->right->right=new Node(50);
	int p[1000];
	path(root,p,0);
	
}
