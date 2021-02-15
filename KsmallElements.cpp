#include <iostream>

using namespace std;
void KsmallestElements(int a1[],int n,int k){
    for(int i=k;i<n;i++){
        int max=a1[k-1];
        int max_pos=k-1;
        for(int j=k-2;j>=0;j--){
            if(a1[j]>max){
                max=a1[j];
                max_pos=j;
            }
        }
        int currentElement=a1[i];
        if(max>currentElement){
            int m=max_pos;
            while(m<k-1){
                a1[m]=a1[m+1];
                m++;
            }
            a1[k-1]=currentElement;
        }
        
    }
    for(int i=0;i<k;i++){
            cout<<a1[i]<<' ';
        }
}
int main()
{
    int a1[]={4,2,6,1,5};
    int n=sizeof(a1)/sizeof(a1[0]);
    int k=3;
    KsmallestElements(a1,n,k);
    return 0;
}
