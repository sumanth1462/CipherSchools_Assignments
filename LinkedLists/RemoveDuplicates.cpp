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
Node *RemoveDuplicates(Node *head){
    Node *curr=head;
    while(curr!=NULL && curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node *temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(2);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    head->next->next->next->next->next=new Node(5);
    cout<<"Original"<<endl;
    print(head);
    cout<<"After Removing duplicates"<<endl;
    print(RemoveDuplicates(head));
    
}
