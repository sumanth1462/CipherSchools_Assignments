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
}
bool isPalindrome(Node *head){
    Node *fast=head;
    Node *slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
    }
    Node *l2=reverse(slow->next);
    Node *l3=head;
    while(l2!=NULL){
        if(l2->data!=l3->data){
            return false;
        }
        l3=l3->next;
        l2=l2->next;
    }
    return true;
}
int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(2);
    head->next->next->next=new Node(2);
    head->next->next->next->next=new Node(1);
    bool ans=isPalindrome(head);
    if(ans){
        cout<<"It is Palindrome"<<endl;
    }
    else{
        cout<<"It is not a Palindrome"<<endl;
    }
    return 0;
}
