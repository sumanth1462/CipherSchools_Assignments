#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int k){
        data=k;
        left=right=NULL;
    }
};
bool Mirror(Node *head1,Node *head2){
    if(head1==NULL && head2==NULL){
        return true;
    }
    if(head1==NULL || head2==NULL){
        return false;
    }
    
    return ((head1->data==head2->data) && Mirror(head1->left,head2->right) && Mirror(head1->right,head2->left));
}
int main(){
    Node *head1=new Node(1);
    head1->left=new Node(2);
    head1->right=new Node(3);
    head1->left->left=new Node(4);
    head1->right->left=new Node(6);
    head1->left->right=new Node(5);
    head1->right->right=new Node(7);
    
    Node *head2=new Node(1);
    head2->left=new Node(3);
    head2->right=new Node(2);
    head2->left->left=new Node(7);
    head2->right->left=new Node(5);
    head2->left->right=new Node(6);
    head2->right->right=new Node(4);
    if(Mirror(head1,head2)){
        cout<<"They are Mirror of each other";
    }
    else{
        cout<<"They are not mirror of each other";
    }
}
