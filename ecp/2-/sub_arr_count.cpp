#include <bits/stdc++.h>
using namespace std;

int main()
{int n=3;
    int arr[n] = {1,4,3};

        int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n-1;j++){
            if(arr[j]>arr[j+1])
            break;
            else
            count++;

            // cout<<arr[k];
        cout<<endl;
        // count++;
        }
    }
    cout<<count;
   return 1;
}