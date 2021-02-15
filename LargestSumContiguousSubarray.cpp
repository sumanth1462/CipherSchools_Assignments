#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void LargestSumContiguousSubarray(int a1[],int n){
    int submax=a1[0];
    int res=a1[0];
    for(int i=1;i<n;i++){
        submax=max(submax+a1[i],a1[i]);
        res=max(submax,res);
    }
    cout<<res;
}
int main()
{
    int a1[]={-2,-3,4,-1,-2,1,5,-1};
    int n=sizeof(a1)/sizeof(a1[0]);
    LargestSumContiguousSubarray(a1,n);

    return 0;
}
