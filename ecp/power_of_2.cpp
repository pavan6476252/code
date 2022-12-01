#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n & 1 == 1)
            cout << "Not power of 2" << endl;
        else
            cout << "Power of 2" << endl;
    }
    return 1;
}