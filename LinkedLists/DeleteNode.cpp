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
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

void deleteNode(Node *ptr){
    Node *temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    delete(temp);
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	Node *p=new Node(30);
	head->next->next=p;
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(25);
	cout<<"Before Deleteion"<<endl;
	printlist(head);
	//cout<<p->next->data;
	cout<<"After Deletion"<<endl;
	deleteNode(p);
	printlist(head);
	return 0;
} 
