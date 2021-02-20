#include<bits/stdc++.h>
using namespace std;
struct MyStack{
    int *arr;
    int c,t;
    MyStack(int len){
        arr=new int[len];
        c=len;
        t=-1;
    }
    void push(int x){
        if(t==c-1){
            cout<<"Stack is FULL"<<endl;
            return;
        }
        t++;
        arr[t]=x;
    }
    int pop(){
        if(t==-1){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
            
        }
        int a=arr[t];
        t--;
        return a;
    }
    int top(){
        if(t==-1){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
            
        }
        return arr[t];
    }
    int size(){
        return (t+1);
    }
    int empty(){
        return (t==-1);
    }
};
int main(){
    
    MyStack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"size is "<<s.size()<<endl;
    cout<<"deleted element is "<<s.pop()<<endl;
    cout<<"size is "<<s.size()<<endl;
    cout<<"top element is "<<s.top()<<endl;
    cout<<"Stack is empty(1) or not empty(0) "<<s.empty()<<endl;
}
