// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int arr [5] = {3,2,4,525,45};
    
    // insertion sort
    for(int i=0;i<5;i++){
        int temp;
        for(int j =i ;j>=0;j--){
            if(arr[i] < arr[j] ){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;  
            }
        }
    }
    
    //printing
   for(int i=0;i<5;i++){
       cout<<arr[i] << " ";
   }
    return 0;
}
