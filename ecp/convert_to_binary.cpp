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
        int binary[31];
        int count = 0;
        while (n)
        {

            binary[count] = n % 2;
            count++;
            n = n / 2;
        }
        for (int i = count ; i >= 0; i--)
        {
            cout << binary[i];
        }
    }
    return 1;
}