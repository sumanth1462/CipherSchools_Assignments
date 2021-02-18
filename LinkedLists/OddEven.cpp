#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
Node *oddEven(Node *head){
    Node *odd=head;
    Node *even=head->next;
    Node *evenHead=even;
    while(even!=NULL and even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
}
void print(Node *head){
    Node *curr=head;
    while(curr->next!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<curr->data<<endl;
}
int main(){
    struct Node *root=new Node(1);
    root->next=new Node(2);
    root->next->next=new Node(3);
    root->next->next->next=new Node(4);
    root->next->next->next->next=new Node(5);
    print(root);
    oddEven(root);
    print(root);
}
