#include <iostream>
using namespace std;
#define n 4
bool isSafe(int grid[n][n],int j,int i){
    for(int col=0;col<i;col++){
        if(grid[j][col]==1){
            return false;
        }
    }
    
    for(int row=j,col=i;row>=0 && col>=0;row--,col-- ){
        if(grid[row][col]==1){
            return false;
        }
    }
    
    for(int row=j,col=i;row<n && col>=0;row++,col-- ){
        if(grid[row][col]==1){
            return false;
        }
    }
    return true;
}
bool placeQueen(int grid[n][n],int i){
    if(i==n){
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                cout<<grid[row][col]<<' ';
            }
            cout<<endl;
        }
        //cout<<endl;
        return true;
        
    }
    for(int j=0;j<n;j++){
        if(isSafe(grid,j,i)){
            grid[j][i]=1;
            bool isPlaced=placeQueen(grid,i+1);
            if(isPlaced){
                return true;
            }
            grid[j][i]=0;
        }
        
    }
    return false;
}
int main()
{
    int grid[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            grid[i][j]=0;
        }
    }
    placeQueen(grid,0);

    return 0;
}  
