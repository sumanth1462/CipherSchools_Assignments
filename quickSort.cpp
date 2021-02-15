#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int a1[],int low,int high){
    int pivot=a1[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++){
        if(a1[j]<pivot){
            i++;
            int temp=a1[i];
            a1[i]=a1[j];
            a1[j]=temp;
        }
    }
    int temp1=a1[i+1];
    a1[i+1]=a1[high];
    a1[high]=temp1;
    return (i+1);
    
}
void quickSort(int a1[],int low,int high){
    if(low<high){
        int p=partition(a1,low,high);
        quickSort(a1,low,p-1);
        quickSort(a1,p+1,high);
        
    }
}
int main()
{
    //cout<<"Hello World";
    int a1[]={10,80,30,90,40,50};
    int n=sizeof(a1)/sizeof(a1[0]);
    quickSort(a1,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }
    return 0;
} 
