#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=-0;i<n;i++){
        cin>>arr[i];
    }
    //find maximum

    int max=INT_MIN ;
    for(int i=0;i<n;i++){
    if(arr[i]>max)
    max=arr[i];
    }

    int temp[max]={0};
    for(int i=0;i<n;i++){
        temp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(temp[arr[i]]%2==0){
            cout<<arr[i];
            break;
        }
    }
    return 1;
}