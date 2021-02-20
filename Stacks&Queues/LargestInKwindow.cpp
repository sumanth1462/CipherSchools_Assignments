#include <bits/stdc++.h> 
using namespace std; 
void printMaximum(int arr[],int n,int k){
    deque<int>deque;
    int i;
    for(i=0;i<k;i++){
        while(!deque.empty() && arr[i]>=arr[deque.back()]){
            deque.pop_back();
        }
        deque.push_back(i);
    }
    for(;i<n;i++){
        cout<<arr[deque.front()]<<endl;
        
        if(!deque.empty() && deque.front()<=i-k){

            deque.pop_front();
        }
        while(!deque.empty() && arr[i]>=arr[deque.back()] ){
            deque.pop_back();
        }
        deque.push_back(i);
    }
    cout<<arr[deque.front()]<<endl;
}
int main(){
    int arr[]={7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMaximum(arr,n,3);
}
