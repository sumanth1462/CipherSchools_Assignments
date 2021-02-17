#include<iostream>
using namespace std;
int possiblePath(int n,int m){
    if(n==1||m==1){
        return 1;
    }
    return possiblePath(n-1,m)+possiblePath(n,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<possiblePath(n,m);
}
