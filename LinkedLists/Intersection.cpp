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
Node *MergeSortedLL(Node *head1,Node *head2){
    if(head1==NULL){
        return head2;
    }
    if(head2=NULL){
        return head1;
    }
    Node *head=NULL;
    Node *end=NULL;
    if(head1->data<=head2->data){
        head=head1;
        end=head1;
        head1=head1->next;
    }
    else{
        head=head2;
        end=head2;
        head2=head2->next;
    }
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            end->next=head1;
            end=head1;
            head1=head1->next;
        }
        else{
            end->next=head2;
            end=head2;
            head2=head2->next;
        }
    }
    if(head1!=NULL){
        end->next=head2;
    }
    else{
        end->next=head1;
    }
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
int length(Node *head){
    Node *curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}
int Intersection(Node *head1,Node *head2){
    int c1=length(head1);
    int c2=length(head2);
    //cout<<c1<<c2;
    int c=abs(c1-c2);
    int i=0;
    if(c1>c2){
        while(i<c){
            head1=head1->next;
            i++;
        }
    }
    else{
        while(i<=c){
            head2=head2->next;
            i++;
        }
    }
    //cout<<head1->data<<endl;
    while(head1!=NULL && head2!=NULL ){
        if(head1==head2){
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
int main()
{
    Node *head1=new Node(3);
    Node *head2=new Node(10);
    head1->next=new Node(6);
    head1->next->next=new Node(9);
    
    Node *CNode=new Node(15);
    head1->next->next->next=CNode;
    head2->next=CNode;
    
    CNode=new Node(30);
    head1->next->next->next->next=CNode;
    head2->next->next=CNode;
    //print(head1);
    //print(head2);
    cout<<Intersection(head1,head2);
    return 0;
}
