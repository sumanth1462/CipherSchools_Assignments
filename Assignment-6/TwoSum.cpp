#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nums[]={3,0,3};
    int n=sizeof(nums)/sizeof(nums[0]);
    int target=6;
    int c=0;
    unordered_map<int,int>fmap;
    for(int i=0;i<n;i++){
        int diff=target-nums[i];
        if(fmap.count(diff)){
            cout<<"["<<fmap[diff]<<","<<i<<"]";
            c=1;
            break;
        }
        fmap[nums[i]]=i;
    }
    if(c==0){
        cout<<"Sum Not Found";
    }
}
