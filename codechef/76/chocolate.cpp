#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x + y + z > 5)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}