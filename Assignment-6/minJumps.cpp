
#include <bits/stdc++.h>
using namespace std;
int minJumps(int a1[], int n) 
{ 
    int dp[n]; 
    int i, j; 
    dp[0] = 0; 
    for (i = 1; i < n; i++) { 
        dp[i] = INT_MAX; 
        for (j = 0; j < i; j++) { 
            if (i <= (j + a1[j]) && dp[j] != INT_MAX) { 
                dp[i] = min(dp[i], dp[j] + 1); 
                break; 
            } 
        } 
    } 
    return dp[n - 1]; 
} 
int main() {
    int a1[] = {3, 4, 2, 1, 2, 1};
    int n =sizeof(a1)/sizeof(a1[0]);
    cout<<minJumps(a1, n);
}
