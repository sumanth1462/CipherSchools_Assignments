#include <iostream>
#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
Node *reverseK(Node *head, int k){
    Node *curr=head;
    Node *First=NULL;
    bool isFirstPass=true;
    while(curr!=NULL){
        Node *f1=curr;
        Node *prev=NULL;
        int c=0;
        while(curr!=NULL && c<k){
            Node *next1=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next1;
            c++;
        }
        if(isFirstPass){
            head=prev;
            isFirstPass=false;
        }
        else{
            First->next=prev;
        }
        First=f1;
    }
    return head;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(6);
    int k=3;
    //print(head);
    print(reverseK(head,k));
    
}
