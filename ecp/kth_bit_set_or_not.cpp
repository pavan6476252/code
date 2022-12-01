#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1;
        int k;
        cin>> k>> num1;

        if(num1 & 1<<k-1)
        cout<<"Bit is set"<<endl;

    }
    return 1;
}