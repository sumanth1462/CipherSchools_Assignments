#include <bits/stdc++.h>
using namespace std;
string findMinimumWindow(string s, string p){
    map<char, int>pMap;
    for(int i=0;i<p.length();i++){
        pMap[p[i]]++;
    }
    int start=0;
    int index=-1;
    int min_len=INT_MAX;
    int count=0;
    map<char,int>sMap;
    for(int j=0;j<s.length();j++){
        sMap[s[j]]++;
        if(sMap[s[j]]<=pMap[s[j]]){
            count++;
        }
        if(count==p.length()){
            while(sMap[s[start]]>pMap[s[start]] || pMap[s[start]]==0){
                if(sMap[s[start]]>pMap[s[start]]){
                    sMap[s[start]]--;
                }
                start++;
            }
            int len_window=j-start+1;
            if(min_len>len_window){
                min_len=len_window;
                index=start;
            }
        }
    }
    if(index==-1){
        return "";
    }
    
    return s.substr(index,min_len);
    
}
int main(){
    
    string s="this is a test string";
    string p="tist";
    cout<<findMinimumWindow(s,p);
}
