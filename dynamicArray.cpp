#include<iostream>
using namespace std;
int main(){
    int *p=NULL;
    int n;
    cin>>n;
    p=new int[n];
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        *(p+i)=temp;
    }
    for(int i=0;i<n;i++){
        cout<<*(p+i)<<endl;
    }
    
    delete []p;
    
}
