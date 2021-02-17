#include <iostream>
#include <bits/stdc++.h>
#define M 3
#define N 3
using namespace std;

int getCountSmallerEquals(int a1[M][N],int target){
    
    int count=0;
    int cols=N;
    int rows=M;
    int row=rows-1;
    int col=0;
    while(row>=0 && col<cols){
        if(a1[row][col]<=target){
            col++;
            count=count+(row+1);
        }
        else{
            row--;
        }
    }
    return count;
}
int kSmallest(int a1[M][N],int k){
    int n=N;
    int m=M;
    int l=a1[0][0];
    int h=a1[m-1][n-1];
    while(l<h){
        int mid=(l+h)>>1;
        int count=getCountSmallerEquals(a1,mid);
        if(count>=k){
            h=mid;
        }
        else{
            l=mid+1;
        }
    }
    return l;
}
int main(){
    int a1[M][N]={{1,2,3},{4,5,6},{7,8,9}};
    int k=3;
    cout<<kSmallest(a1,k);
}
