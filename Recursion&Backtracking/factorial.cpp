#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
    int a=fact(n);
    cout<<"factorial of "<<n<<" is: ";
    cout<<a;
}
