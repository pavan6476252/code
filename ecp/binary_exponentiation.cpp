#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    // while (t--)
    // {
    //     int base, pow;
    //     cin >> base >> pow;

    //     int ans = 1;
    //     int x = pow / 2;
    //     while (x)
    //     {
    //         ans = ans * base;
    //         x--;
    //     }

    //     if (pow % 2 == 0)
    //     {
    //         ans = ans * ans;
    //     }
    //     else
    //     {
    //         ans = ans * ans * base;
    //     }

    //     cout << ans << endl;
    // }

    while (t--)
    {
        int base, pow;
        cin >> base >> pow;
        int ans = 1;
        while (pow)
        {
            if (pow & 1)
            {
                ans = ans * base;
            }
            base = base * base;
            pow = pow >> 1;
        }
        cout << ans;
    }
    return 1;
}