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
void DetectRemove(Node *head){
    Node *fast=head;
    Node *slow=head;
    bool isLoop=false;
    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        
        if(slow==fast){
            cout<<"Loop Found"<<endl;
            isLoop=true;
            break;
        }
    }
    if(isLoop){
        slow=head;
        Node *prev=NULL;
        while(slow!=fast){
            prev=fast;
            fast=fast->next;
            slow=slow->next;
        }
        cout<<"Loop Node:"<<slow->data;
        prev->next=NULL;
    }
    else{
        cout<<"Loop Not Found";
    }

}
int main()
{
    Node *head=new Node(15);
    head->next=new Node(20);
    head->next->next=new Node(50);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(10);
    head->next->next->next->next=head->next->next;
    DetectRemove(head);
    return 0;
}
