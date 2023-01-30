#include<stdio.h>
#include<stdlib.h>

void main(){
    int i,j,tot_mem,os,rem,n,part_size;
    printf("enter total memory\n");
    scanf("%d",&tot_mem);
    printf("enter os mem\n");
    scanf("%d",&os);
    printf("ennter no.of process\n");
    scanf("%d",&n);
    printf("enter partion size\n");
    scanf("%d",&part_size);
 rem = tot_mem-os;
    for(i=0;i<n;i++){
        int temp;
        printf("enter process %d size\n",i+1);
        scanf("%d",&temp);
        if(rem>=temp){
            rem = rem-temp;
            printf("mem allocated to %d rem mem is %d", i+1,rem);
        }
        else{
            printf("insufficient mem \n external fragmentation %d",rem);
            break;
        }
    }
}