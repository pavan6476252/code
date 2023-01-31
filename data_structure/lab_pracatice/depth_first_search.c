#include<stdio.h>
int size;
int A[5][5] = { {0 ,1 ,1 ,1 ,1},
                { 1 ,0 ,0 ,0 ,0},
                {  1 ,0, 0, 0, 0},
                {  1 ,0 ,0 ,0 ,0},
                {  1, 0, 0, 0, 0},};
int visited [5] = {0,0,0,0,0};

void DFS(int i){
    visited[i]=1;
    printf("%d ",i);
    for(int j=0;j<size;j++){
        if(visited[j]==0 && A[i][j]==1){
            DFS(j);
        }
    }
}
int main(){
    size = 5;
    DFS(3);
    return 1;
}