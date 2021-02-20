
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
struct MyStack{
    Node *head;
    int c;
    MyStack(){
        head=NULL;
        c=0;
    }
    void push(int data){
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
        c++;
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
    int peek(){
        if(head==NULL){
            cout<<"Stack is Empty";
            return INT_MAX;
        }
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
};


int main(){
    MyStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"size is "<<s.size()<<endl;
    cout<<"deleted element is "<<s.pop()<<endl;
    cout<<"size is "<<s.size()<<endl;
    cout<<"top element is "<<s.peek()<<endl;
    cout<<"Stack is empty(1) or not(0) "<<s.empty()<<endl;
}
