#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int k){
        data=k;
        next=NULL;
    }
};
struct MyQueue{
    Node *front;
    Node *rear;
    MyQueue(){
        front=rear=NULL;
    }
    void enQueue(int x){
        Node *temp=new Node(x);
        if(rear==NULL){
            front=temp;
            rear=temp;
            return;
        }
        rear->next=temp;
        rear=temp;

    }
    void deQueue(){
        if(front==NULL){
            return;
        }
        Node *temp=front;
        front=front->next;
        if(front==NULL){
            rear=NULL;
        }
        delete(temp);
    }
};
int main(){
    MyQueue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.deQueue();
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.deQueue();
    cout<<"Front "<<(q.front)->data<<endl;
    cout<<"Rear "<<(q.rear)->data<<endl;
}
