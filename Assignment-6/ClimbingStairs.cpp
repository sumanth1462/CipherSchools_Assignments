#include<bits/stdc++.h>
using namespace std;
int diffPaths(int n){
    int *dp;
    dp=new int[n+1];
    dp[1]=1;
    dp[0]=1;
    if(n==1){
        return dp[1];
    }
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<diffPaths(n);
}
