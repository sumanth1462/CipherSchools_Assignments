#include <bits/stdc++.h>
using namespace std;
int maxi=0;
struct Node{
    int data;
    Node *left, *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
int maximumSum(Node *head){
    if(head==NULL){
        return 0;
    }
    int leftSum=maximumSum(head->left);
    int rightSum=maximumSum(head->right);
    maxi=max(maxi,leftSum+rightSum+head->data);
    return leftSum+rightSum+head->data;
}
int main(){
    Node *head=new Node(1);
    head->left=new Node(2);
    head->right=new Node(3);
    head->left->left=new Node(4);
    head->right->left=new Node(5);
    head->left->right=new Node(6);
    head->right->right=new Node(7);
    int max_sum=maximumSum(head);
    cout<<maxi<<endl;
}
