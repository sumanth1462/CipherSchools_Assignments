#include <bits/stdc++.h>
using namespace std;
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
    cout<<endl;
}
void addInStack(stack<int>&s,int element){
    if(s.empty()||element>s.top()){
        s.push(element);
        return;
    }
    int temp=s.top();
    s.pop();
    addInStack(s,element);
    s.push(temp);
}
void sort(stack<int>&s){
    if(s.empty()){
        return;
    }
    int element=s.top();
    s.pop();
    sort(s);
    addInStack(s,element);
}
int main(){
    stack<int>s;
    s.push(50);
    s.push(40);
    s.push(-3);
    s.push(30);
    cout<<"Original Order"<<endl;
    print(s);
    sort(s);
    cout<<"Sorted Order"<<endl;
    print(s);
    return 0;
}
