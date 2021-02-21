#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node *next;
    Node(int k){
        data=k;
        left=right=next=NULL;
    }
};


void connectLevel(Node *head){
    while(head!=NULL){
        Node *dummyNode=new Node(INT_MIN);
        Node *childNode=dummyNode;
        while(head!=NULL){
            if(head->left!=NULL){
                childNode->next=head->left;
                childNode=childNode->next;
            }
            if(head->right!=NULL){
                childNode->next=head->right;
                childNode=childNode->next;
            }
            head=head->next;
        }
        head=dummyNode->next;
    }
}
void printTree(Node *head){
    if(head==NULL){
        return;
    }
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    if(head->left!=NULL){
        printTree(head->left);
    }
    else{
        printTree(head->right);
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
    connectLevel(head);
    printTree(head);
}
