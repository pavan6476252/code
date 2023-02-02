#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        if (x < y && x < z)
            cout << "alice" << endl;
        else if (y < z && y < x)
            cout << "bob" << endl;
        else
            cout << "charlie" << endl;
    }
    return 0;
}