// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int arr [5] = {3,2,4,525,45};
   
   for(int i =0 ;i<5;i++){
       int min =i;
       for(int j =i+1 ; j<5 ;j++){
           if(arr[j]<arr[min]){
               min = j;
           }
       }
       if(arr[min]<= arr[i]){
           ///swap
           int temp = arr[min];
           arr[min]  = arr[i];
           arr[i] = temp;
       }
   }
   for(int i=0;i<5;i++){
       cout<<arr[i] << " ";
   }
    return 0;
}
