#include <bits/stdc++.h>
using namespace std;
void print(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<' ';
        s.pop();
    }
    cout<<endl;
}
void reverse(stack<int>s){
    stack<int>s1;
    while(!s.empty()){
        s1.push(s.top());
        s.pop();
    }
    cout<<"Reverse Order"<<endl;
    print(s1);
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout<<"Original Order"<<endl;
    print(s);
    reverse(s);
}
