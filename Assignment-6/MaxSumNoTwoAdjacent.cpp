#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1[]={5,5,10,100,10,5};
    int n=sizeof(a1)/sizeof(a1[0]);
    int c=0;
    int sum=0;
    int maxsum=0;
    int i=0;
    while(c!=n-1){
        if(a1[i]>0){
            sum=sum+a1[i];
            //cout<<a1[i]<<" "<<sum<<endl;
        }
        if(i==n-1||i==n-2){
            maxsum=max(sum,maxsum);
            c=c+1;
            i=c;
            sum=0;
        }
        else{
            i=i+2;
        }
    }
    cout<<maxsum;
}
