#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void tropicalRainWater(int a1[],int n){
    int left[n];
    int right[n];
    left[0]=a1[0];
    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],a1[i]);
        
    }
    right[n-1]=a1[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],a1[i]);
    }
    int totalWater=0;
    for(int i=0;i<n;i++){
        totalWater+=min(left[i],right[i])-a1[i];
    }
    cout<<totalWater;
}
int main()
{
    int a1[]={3, 1, 0, 5, 2, 2};
    int n=sizeof(a1)/sizeof(a1[0]);
    tropicalRainWater(a1,n);
    return 0;
}
