#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        while(n--){
            cin>>arr[n-1]; 
        }
        for(int item :arr){
            if(item &1 == 1)
            cout<<"Odd occurence"<<endl;
        }
    }
    return 1;
}