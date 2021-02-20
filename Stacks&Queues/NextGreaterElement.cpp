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
            //cout<<"Stack is Empty";
            return -1;
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
            //cout<<"Stack is Empty";
            return -1;
        }
        return head->data;
    }
    bool empty(){
        return head==NULL;
    }
};
void NextGreaterElement(int arr[],int n){
    MyStack s;
    for(int i=n-1;i>=0;i--){
        if(s.empty()){
            cout<<arr[i]<<" "<<-1<<endl;
            s.push(arr[i]);
        }
        else{
            //cout<<s.top()<<endl;
            if(arr[i]>s.top()){
                while(s.empty()==false and s.top()<arr[i]){
                    s.pop();
                }
            }
            cout<<arr[i]<<" "<<s.top()<<endl;
            s.push(arr[i]);
        }
    }
}
int main(){
    int arr[]={11,13,21,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    NextGreaterElement(arr,n);
}
