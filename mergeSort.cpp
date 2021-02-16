#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int a1[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=a1[i+l];
    for(int j=0;j<n2;j++)
        right[j]=a1[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            a1[k++]=left[i++];
        else
            a1[k++]=right[j++];
    }
    while(i<n1)
        a1[k++]=left[i++];
    while(j<n2)
        a1[k++]=right[j++];    
}


void mergeSort(int a1[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergeSort(a1,l,m);
        mergeSort(a1,m+1,r);
        merge(a1,l,m,r);
    }
}
void printArray(int a1[],int n){
    for(int i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }
}
int main(){
    int a1[]={10,5,30,15,7};
    int n=sizeof(a1)/sizeof(a1[0]);
    mergeSort(a1,0,n-1);
    printArray(a1,n);
}
