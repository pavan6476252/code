#include<stdio.h>
void merge(int *arr,int lb ,int mid ,int hb){
    int i = lb,j= mid+1;
    int temp[100];
    int k= lb;
    while(i<=mid && j<=hb){
        if(arr[i]< arr[j]){
            temp[k]= arr[i];
            i++;
            k++;
        }else{
            temp[k] = arr[j];
            j++;
            k++;
        }
    }
   if(i>mid){
    while(j<=hb){
        temp[k] = arr[j];
        k++;j++;
    }
   }else{
    while(i<=mid){
        temp[k]= arr[i];
        k++;i++;
    }
   }

    for(int i=lb; i<k;i++){
        arr[i] = temp[i];
    }

}

void merge_sort(int* arr , int lb ,int hb){
    int mid;
    if(lb<hb){
        mid = (lb+hb)/2;
       
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,hb);
        merge(arr , lb,mid,hb);
    }
}

int main(){
    int n=6;
    int arr[6] = {9,8,7,6,5,4};
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}