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
int length(Node *head){
    Node *curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}
Node *sumHelper(Node *head1,Node *head2,int diff){
    if(head1==NULL){
        return NULL;
    }
    Node *my_result=NULL;
    if(diff==0){
        my_result=new Node(head1->data + head2->data);
    }
    else{
        my_result=new Node(head1->data);
    }
    Node *recursiveResult=NULL;
    if(diff==0){
        recursiveResult=sumHelper(head1->next,head2->next,diff);
    }
    else{
        recursiveResult=sumHelper(head1->next,head2,diff-1);
    }
    if(recursiveResult!=NULL && recursiveResult->data>9){
        recursiveResult->data=recursiveResult->data%10;
        my_result->data=my_result->data+1;
    }
    my_result->next=recursiveResult;
    return my_result;
}
Node *sum(Node *head1,Node *head2){
    Node *sum_result=NULL;
    if(length(head1)>length(head2)){
        int diff=length(head1)-length(head2);
        sum_result=sumHelper(head1,head2,diff);
    }
    else{
        int diff=length(head2)-length(head1);
        sum_result=sumHelper(head2,head1,diff);
    }
    Node *temp=new Node(1);
    if(sum_result->data > 9){
        sum_result->data=sum_result->data%10;
        temp->next=sum_result;
        sum_result=temp;
    }
    return sum_result;
}
void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    Node *head1=new Node(9);
    head1->next=new Node(9);
    Node *head2=new Node(9);
    head2->next=new Node(9);
    head2->next->next=new Node(9);
    print(head1);
    print(head2);
    print(sum(head1,head2));
    return 0;
}
