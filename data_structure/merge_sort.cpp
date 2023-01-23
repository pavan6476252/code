#include<iostream>
using namespace std;
void merge(int *arr,int lb,int mid,int ub){
     int temp[100];
     int i =lb;
     int j = mid+1;
     int k= lb;

     while(i<=mid && j<=ub){
        if(arr[i]<arr[j]){
            temp[k]= arr[i];
            i++;
            k++;
        }else{
            temp[k]=arr[j];
            k++;j++;
        }
     }
     if(i>mid){
        while(j<=ub){
            temp[k]=arr[j];
            k++;j++;
        }
     }else{
        while(i<=mid){
            temp[k]=arr[i];
            k++;i++;
        }
     }
     for(int i=lb;i<k;i++){
        arr[i]= temp[i];
     }
}
void merge_sort(int* arr,int lb,int ub){
    int mid;
    if(lb<ub){
        mid= (lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
    return;
}

int main(){
    int n=9;
    int arr[n] = {9,8,7,6,5,4,3,2,1};
    merge_sort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 1;
}