#include <iostream>
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
    // max sub array sum subarrays kadanes  algo
    int max_till =0;
    int max =  INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_till += arr[i];
        if (max_till > max)
            max = max_till;
        if (max_till < 0)
            max_till = 0;
    }

    cout << "max = " << max;

    return 1;
}