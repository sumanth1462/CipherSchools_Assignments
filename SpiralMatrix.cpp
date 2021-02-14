#include <iostream>

using namespace std;

int main()
{
    int r=4,c=5;
    int arr[r][c]= { { 1, 2, 3, 4,17},
                    { 5, 6, 7, 8 ,18},
                    { 9, 10, 11, 12,19 },
                    { 13, 14, 15, 16 ,20} };
    
    int m=0,n=0;
    while(m<r and n<c){
        for(int i=n;i<c;i++){
            cout<<arr[m][i]<<' ';
        }
        m++;
        for(int j=m;j<r;j++){
            cout<<arr[j][c-1]<<' ';
        }
        c--;
        if(m<r){
            for(int i=c-1;i>=n;i--){
                cout<<arr[r-1][i]<<' ';
                
            }
            r--;
        }
        if(n<c){
            for(int j=r-1;j>=m;j--){
                cout<<arr[j][n]<<' ';
            }
           n++; 
        }
    }
    return 0;
}
