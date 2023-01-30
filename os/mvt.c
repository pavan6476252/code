#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
    int i,j,tot_mem,os,rem,
    printf("enter tot mem\n");
    scanf("%d",&tot_mem);
    printf("enter no.processes\n");
    scanf("%d",&n);
    printf("os size\n");
    scanf("%d",&os);
    rem = tot_mem-os;

    for(int i=0;i<n;i++){
        int temp;
        printf("enter process %d size",i+1);
    scanf("%d\n",&temp;)
        if(temp<= rem){
            printf("meme allocated to %d process",i+1);
            rem= rem-temp;
        }else{
            printf("enternal fagmentation %d\n",rem);
        }
    }

}