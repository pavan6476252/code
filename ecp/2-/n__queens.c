#include<stdio.h>
#include<stdbool.h>
#define N 4
bool isSafe(int arr[N][N],int x, int y, int n){
    int row;
    for( row=0;row<x;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
     row=x;
    int col=y;
    while(row>=0 && col>=0){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col--;
    }
     row=x;
     col=y;
    while(row>=0 && col<n){
        if(arr[row][col]==1){
            return false;
        }
        row--;
        col++;
    }
    return true;
}

bool nQueen(int arr[N][N] ,int x,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr,x,col,n)){
            arr[x][col]= 1;

           if( nQueen(arr,x+1,n)){
            return true;
           }
            // 
            arr[x][col]=0;
        }
    }
    return false;
}

int main(){
    
    
   int board[N][N] ={ { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
    if (nQueen(board,0,N) == false) {
        printf("Solution does not exist");
       
    }else{
         printf("Solution  exist");
         for(int i=0;i<N;i++){
               printf("\n");
            for(int j=0;j<N;j++){
                printf("%d ",board[i][j]);
            }
         
         }
       
    }
    return 0;
}