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
Node *reverse(Node *head){
    Node *current=head;
    Node *prev=NULL;
    Node *next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL";
}
int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    cout<<"Original Order"<<endl;
    print(head);
    cout<<endl;
    cout<<"Reverse Order"<<endl;
    head=reverse(head);
    print(head);
    
    return 0;
}
