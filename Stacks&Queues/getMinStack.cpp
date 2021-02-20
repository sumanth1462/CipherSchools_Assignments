#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    int mini;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct MyStack{
    Node *head;
    int c;
    MyStack(){
        head=NULL;
        c=0;
    }
    void push(int data){
        if(head==NULL){
            Node *temp=new Node(data);
            temp->mini=data;
            head=temp;
            c++;
        }
        else{
            Node *temp=new Node(data);
            int mini=head->mini;
            temp->mini=min(mini,data);
            temp->next=head;
            head=temp;
            c++;
        }
    }
    int pop(){
        if(head==NULL){
            cout<<"Stack is Empty";
            return INT_MAX;
        }
        int res=head->data;
        Node *temp=head;
        head=head->next;
        delete(temp);
        c--;
        return res;
    }
    int size(){
        return c;
    }
    int top(){
        if(head==NULL){
            cout<<"Stack is Empty";
            return INT_MAX;
        }
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
    int getMin(){
        return head->mini;
    }
};
int main(){
    MyStack s;
    s.push(5);
    s.push(2);
    s.push(10);
    s.push(1);
    cout<<s.getMin()<<endl;
    //s.pop();
    //cout<<s.getMin()<<endl;
}
