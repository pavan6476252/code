#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int fir = INT_MIN;
    int sec = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > fir)
        {
            sec = fir;
            fir = arr[i];
        }
        else if (sec < arr[i])
        {
            sec = arr[i];
        }
    }
    if(fir==sec)cout<<"-1";
    else
    cout << sec;
    return 1;
}