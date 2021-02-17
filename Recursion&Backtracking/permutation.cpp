#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permutation(string s1,int low,int high){
    if(low==high){
        cout<<s1<<endl;
        
    }
    else{
        for(int i=low;i<=high;i++){
            swap(s1[low],s1[i]);
            permutation(s1,low+1,high);
            swap(s1[low],s1[i]);
        }
    }
}
int main(){
    string s="ABC";
    permutation(s,0,s.length()-1);
    
}
