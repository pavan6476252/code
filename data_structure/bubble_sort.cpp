// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int arr [5] = {3,2,4,525,45};
    
   //bubble
   for(int i=0;i<5;i++){
       for(int j=i ; j<5;j++){
           if(arr[j]>arr[j+1]){
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1]= temp;
           }
       }
   }
    //printing
   for(int i=0;i<5;i++){
       cout<<arr[i] << " ";
   }
    return 0;
}
