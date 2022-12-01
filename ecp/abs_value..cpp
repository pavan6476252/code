#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin>>num;

        int x = num >> 31;
        cout << (num^x) - x;
        
    }
    return 1;
}