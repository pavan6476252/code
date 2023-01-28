#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            bool is =  true;
            for(int k=i;k<j;k++){
                // cout<<arr[k]<<" ";
                if(arr[k]>arr[k+1]){
                    is = false;
                    break;
                }
            }
            if(is){
                for(int k =i;k<=j;k++){
                    cout<<arr[k]<<" ";
                }
            }
            cout<<endl;
        }
    }
}