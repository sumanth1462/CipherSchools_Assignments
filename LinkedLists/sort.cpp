#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int k){
        data=k;
        next=NULL;
    }
};
Node *merge(Node *left,Node *right){
    if(left==NULL){
        return right;
    }
    else if(right==NULL){
        return left;
    }
    
    Node *result=NULL;
    if(left->data<=right->data){
        result=left;
        result->next=merge(left->next,right);
    }
    else{
        result=right;
        result->next=merge(left,right->next);
    }
    return result;
}
Node *getMid(Node *head){
    if(head==NULL){
        return head;
    }
    Node *slow=head;
    Node *fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
       
}
Node *Sort(Node *head){
    if(head==NULL||head->next==NULL){
        return head;
    }
    Node *mid=getMid(head);
    Node *next=mid->next;
    mid->next=NULL;
    Node *left=Sort(head);
    Node *right=Sort(next);
    Node *mergedList=merge(left,right);
    return mergedList;
    
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    Node *head=new Node(6);
    head->next=new Node(3);
    head->next->next=new Node(5);
    head->next->next->next=new Node(1);
    print(Sort(head));
    
}
