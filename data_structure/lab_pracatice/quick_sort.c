#include<stdio.h>

int pivot(int *arr, int lb,int hb){
    int pivot = lb;
    int i=lb,j=hb;
    while(i<j){
        while(arr[i]<=arr[pivot]){
            i++;
        }
        while(arr[j]>arr[pivot]){
            j--;
        }
        if(i<j){
        int t =arr[i];
        arr[i]= arr[j];
        arr[i]  = t;
        }
    }
    if(i>j){
        int temp = arr[j];
        arr[j] = arr[pivot];
        arr[pivot]  = temp;
    }
    return j;
}

void quick_sort(int *arr, int lb ,int hb){

    if(lb<hb){
        int loc =pivot(arr,lb,hb);
        quick_sort(arr,lb,loc-1);
        quick_sort(arr,loc+1,hb);
    }
}

int main(){
    int arr[6]={9,8,7,6,5,4};
    quick_sort(arr,0,6);
    for(int i=0;i<6;i++)
    printf("%d",arr[i]);

    return 1;
}