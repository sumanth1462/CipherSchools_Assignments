#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}

Node *MergeSortedLL(Node *head1,Node *head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
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
    if(head1==NULL){
        end->next=head2;
    }
    else{
        end->next=head1;
    }
    return head;
}

int main() 
{ 
	Node *head1=new Node(10);
	head1->next=new Node(21);
	head1->next->next=new Node(30);
	Node *head2=new Node(15);
	head2->next=new Node(35);
	print(MergeSortedLL(head1,head2));
	return 0;
}
