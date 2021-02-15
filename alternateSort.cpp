#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
void alternateSort(int a1[],int n){
    sort(a1,a1+n);
    int i=0,j=n-1;
    while(i<j){
        cout<<a1[j--]<<" ";
        cout<<a1[i++]<<" ";
    }
    if(n%2!=0){
        cout<<a1[i];
    }
}
int main()
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    alternateSort(a1,n);
    return 0;
}
