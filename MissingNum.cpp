#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1, 2,3,4,5,10,7,8,9,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=arr[0],max1=arr[0],tsum=0;
    for(int i=1;i<n;i++){
        sum=sum+arr[i];
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    tsum=max1*(max1+1)/2;
    sum=tsum-sum;
    cout<<sum<<endl;

    return 0;
}
