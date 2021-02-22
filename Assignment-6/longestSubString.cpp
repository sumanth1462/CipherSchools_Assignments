#include <bits/stdc++.h>
using namespace std;
int longestSubstring(string s){
    int n=s.length();
    int res=0;
    vector<int>Index(256,-1);
    int i=0;
    for(int j=0;j<n;j++){
        i=max(i,Index[s[j]]+1);
        res=max(res,j-i+1);
        Index[s[j]]=j;
    }
    return res;
}
int main(){
    string s="ABDEFGABEF";
    cout<<longestSubstring(s);
}
