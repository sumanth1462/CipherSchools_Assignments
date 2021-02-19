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
Node *insert(Node *head,int pos,int data){
    Node *temp=new Node(data);
    if(pos==1){
        temp->next=head;;
        return temp;
    }
    Node *curr=head;
    for(int i=1;i<=pos-2 && curr!=NULL;i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	Node *p=new Node(30);
	head->next->next=p;
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(25);
	cout<<"Original data"<<endl;
	printlist(head);
	int pos=4;
	int data=35;
	cout<<"After Insertion"<<endl;
	printlist(insert(head,pos,data));
	cout<<"After Deletion"<<endl;
	deleteNode(p);
	printlist(head);
	return 0;
} 
