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
    // not optimised for negative values

    // int max = 0;
    // for (int i = 0; i < n; i++)
    //     if (arr[i] > max)
    //         max = arr[i];

    // int temp[max] = {0};
    // for (int i = 0; i < n; i++)
    // {
    //     temp[arr[i]]++;
    // }
    // for (int i = 0; i < max; i++)
    // {
    //     if (temp[i] % 2 == 0 && temp[i] != 0)
    //         cout << i;
    // }

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 == 0)
        {
            cout << arr[i];
            break;
        }
    }
    return 1;
}