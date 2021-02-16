#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int CountInversion(int a1[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=a1[i+l];
    for(int j=0;j<n2;j++)
        right[j]=a1[m+1+j];    
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            a1[k++]=left[i++];
        else{
            a1[k++]=right[j++];
            res=res+(n1-i);
        }
    }
    while(i<n1)
        a1[k++]=left[i++];
    while(j<n2)
        a1[k++]=right[j++];    
    return res;
}


int countInv(int a1[],int l,int r){
    int res=0;
    if(l<r){
        int m=(l+r)/2;
        res+=countInv(a1,l,m);
        res+=countInv(a1,m+1,r);
        res+=CountInversion(a1,l,m,r);
    }
    return res;
}

int main(){
    int a1[]={10,5,30,15,7};
    int n=sizeof(a1)/sizeof(a1[0]);
    cout<<countInv(a1,0,n-1);
    
}
