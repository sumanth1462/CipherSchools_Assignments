#include <bits/stdc++.h>
using namespace std;
bool DuplicateParanthesis(string s1){
    stack<char>s;
    for(char c : s1){
        if(c==')'){
            char start=s.top();
            s.pop();
            int elementCount=0;
            while(start!='('){
                elementCount++;
                //cout<<elementCount<<endl;
                start=s.top();
                s.pop();
            }
            if(elementCount<1){
                return 1;
            }
        }
        else{
            s.push(c);
        }
    }
    return false;
}
int main(){
    string s1="((a+b)+c)";
    if(DuplicateParanthesis(s1)){
        cout<<"Duplicate detected";
    }
    else{
        cout<<"No Duplicate detected";
    }
    return 0;
}
