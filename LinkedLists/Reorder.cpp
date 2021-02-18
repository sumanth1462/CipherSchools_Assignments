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
Node *reverse(Node *l2){
    Node *current=l2;
    Node *prev=NULL;
    Node *next=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
    //return l2;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL";
}
Node *ReOrder(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        //cout<<fast->data<<endl;
        //cout<<slow->data<<endl;
        slow=slow->next;
        fast=fast->next->next;
        
    }
    //cout<<slow->data;
    Node *l2=slow->next;
    slow->next=NULL;
    Node *curr=head,*next1,*next2;
    l2=reverse(l2);
    while(l2!=NULL){
        next1=curr->next;
        next2=l2->next;
        curr->next=l2;
        l2->next=next1;
        curr=next1;
        l2=next2;
        
    }
    cout<<"Reordered"<<endl;
    print(head);
}

int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    cout<<"Original Order"<<endl;
    print(head);
    cout<<endl;
    ReOrder(head);
    
    return 0;
}
