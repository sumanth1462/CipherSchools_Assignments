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
Node *SortedArrToBST(int a1[],int l,int h){
    if(l>h){
        return NULL;
    }
    int mid=(l+h)>>1;
    Node *root=new Node(a1[mid]);
    root->left=SortedArrToBST(a1,l,mid-1);
    root->right=SortedArrToBST(a1,mid+1,h);
    return root;
}
void preOrder(Node *head){
   if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    preOrder(head->left);
    preOrder(head->right);
}

int main(){
    int a1[]={5,10,15,20,25};
    int n=sizeof(a1)/sizeof(a1[0]);
    Node *root=SortedArrToBST(a1,0,n-1);
    cout<<"BST: "<<endl;
    preOrder(root);
    return 0;
}
