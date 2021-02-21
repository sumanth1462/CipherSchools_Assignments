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
int res=0;
int getHeight(Node *head){
    if(head==NULL){
        return 0;
    }
    int leftHeight=getHeight(head->left);
    int rightHeight=getHeight(head->right);
    res=max(res,1+leftHeight+rightHeight);
    return 1+max(leftHeight,rightHeight);
}
int main(){
    Node *head=new Node(1);
    head->left=new Node(2);
    head->right=new Node(3);
    head->left->left=new Node(4);
    head->right->left=new Node(5);
    head->left->right=new Node(6);
    head->right->right=new Node(7);
    cout<<"height of Binary Tree: "<<getHeight(head)<<endl;
    cout<<"Diameter of Binary Tree: "<<res;
}
