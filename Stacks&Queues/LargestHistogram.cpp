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
};
int maxAreaInHistogram(int arr[],int n){
    MyStack s;
    int max_area=0;
    int i=0;
    while(i<n){
        int currentBuilding=arr[i];
        if(s.empty() || currentBuilding>=arr[s.top()]){
            s.push(i);
            i++;
        }
        else{
            int previousBar=s.pop();
            int height=arr[previousBar];
            int width;
            if(s.empty()){
                width=i;
            }
            else{
                width=i-s.top()-1;
            }
            int area=height*width;
            max_area=max(area,max_area);
        }
    }
    while(!s.empty()){
        int previousBar=s.pop();
            int height=arr[previousBar];
            int width;
            if(s.empty()){
                width=i;
            }
            else{
                width=i-s.top()-1;
            }
            int area=height*width;
            max_area=max(area,max_area);
    }
    return max_area;
}
int main(){
    int arr[]={6,0,5,4,5,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maxAreaInHistogram(arr,n);
}
