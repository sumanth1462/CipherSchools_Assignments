#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
void print(Node *root,int currentLevel,int targetLevel){
    if(root==NULL){
        return;
    }
    if(currentLevel==targetLevel){
        cout<<root->data<<' ';
        return;
    }
    print(root->left,currentLevel+1,targetLevel);
    print(root->right,currentLevel+1,targetLevel);
}
int getHeight(Node *root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=getHeight(root->left);
    int rightHeight=getHeight(root->right);
    return max(leftHeight,rightHeight)+1;
}
void levelOrder(Node *root){
    int height=getHeight(root);
    //cout<<"height "<<height<<endl;
    for(int i=1;i<=height;i++){
        print(root,1,i);
    }
}
Node *constructTree(int inorder[],int preorder[],int preorderIndex,int inStart,int inEnd){
    if(inStart > inEnd){
        return NULL;
    }
    //cout<<preorder[preorderIndex];
    Node *root=new Node(preorder[preorderIndex]);
    int inorderIndex=-1;
    for(int i=inStart;i<=inEnd;i++){
        if(inorder[i]==preorder[preorderIndex]){
            inorderIndex=i;
            break;
        }
    }
    int leftSubTreeSize=inorderIndex-inStart;
    root->left=constructTree(inorder,preorder,preorderIndex+1,inStart,inorderIndex-1);
    root->right=constructTree(inorder,preorder,preorderIndex+leftSubTreeSize+1,inorderIndex+1,inEnd);
    return root;
    
}
int main(){
    int inorder[]={4,2,5,1,3};
    int preorder[]={1,2,4,5,3};
    int n=sizeof(inorder)/sizeof(inorder[0]);
    Node *root=constructTree(inorder,preorder,0,0,n-1);
    //cout<<root->data;
    cout<<"Binary Tree"<<endl;
    levelOrder(root);
}
