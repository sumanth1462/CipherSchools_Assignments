#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *random;
    Node(int k){
        data=k;
        next=NULL;
        random=NULL;
    }
};
Node *createClone(Node *head){
    Node *original=head;
    while(original!=NULL && original->next!=NULL){
        Node *copy=new Node(original->data);
        Node *next=original->next;
        original->next=copy;
        copy->next=next;
        original=original->next->next;
    }
    original->next=new Node(original->data);
    original=head;
    while(original!=NULL && original->next!=NULL){
        if(original->random!=NULL){
            original->next->random=original->random->next;
        }
        original=original->next->next;
    }
    original=head;
    Node *copy=head->next;
    Node *copyHead=head->next;
    while(original->next!=NULL && copy->next!=NULL){
        original->next=original->next->next;
        copy->next=copy->next->next;
        original=original->next;
        copy=copy->next;
        
    }
    original->next=NULL;
    return copyHead;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" Random pointer of this node is "<<curr->random->data<<endl;
        curr=curr->next;
    }
}
int main(){
    Node *head=new Node(1);
    Node *node1=new Node(2);
    Node *node2=new Node(3);
    head->next=node1;
    head->random=node2;
    node1->next=node2;
    node1->random=node2;
    node2->random=head;
    print(createClone(head));
}
