#include<stdio.h>
 void main(){
    int arr[10]={11,22,33,44,55,66,77,88,99,100};
    int mid;
    int l=0,h=10;
    int is =0;
    int key =100;
    while(l<h){
        mid = (l+h)/2;
        if(arr[mid]==key){
           is =1;
        }
         if(arr[mid]>key){
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
        if(is==1)
    printf("ok");
    else
    printf("no");
 }