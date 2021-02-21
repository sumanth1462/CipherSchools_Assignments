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
void inOrder(Node *head){
    if(head==NULL){
        return;
    }
    inOrder(head->left);
    cout<<head->data<<" ";
    inOrder(head->right);
}
void preOrder(Node *head){
   if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    preOrder(head->left);
    preOrder(head->right);
}
void postOrder(Node *head){
    if(head==NULL){
        return;
    }
    postOrder(head->left);
    postOrder(head->right);
    cout<<head->data<<" ";
}
void print(Node *head,int currentLevel,int targetLevel){
    if(head==NULL){
        return;
    }
    if(currentLevel==targetLevel){
        cout<<head->data<<' ';
        return;
    }
    print(head->left,currentLevel+1,targetLevel);
    print(head->right,currentLevel+1,targetLevel);
}
int getHeight(Node *head){
    if(head==NULL){
        return 0;
    }
    int leftHeight=getHeight(head->left);
    int rightHeight=getHeight(head->right);
    return max(leftHeight,rightHeight)+1;
}
void levelOrder(Node *head){
    int height=getHeight(head);
    //cout<<"height "<<height<<endl;
    for(int i=1;i<=height;i++){
        print(head,1,i);
    }
}
int main(){
    Node *head=new Node(1);
    head->left=new Node(2);
    head->right=new Node(3);
    head->left->left=new Node(4);
    head->right->left=new Node(5);
    head->left->right=new Node(6);
    head->right->right=new Node(7);
    cout<<"Inorder Traversal: "<<endl;
    inOrder(head);
    cout<<endl;
    cout<<"Preorder Traversal: "<<endl;
    preOrder(head);
    cout<<endl;
    cout<<"PostOrder Traversal: "<<endl;
    postOrder(head);
    cout<<endl;
    cout<<"LevelOrder Traversal: "<<endl;
    levelOrder(head);
    return 0;
}
