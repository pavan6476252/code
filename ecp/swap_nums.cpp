#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1 ,num2;
        cin>> num1>>num2;
        num1 = num1^num2;
        num2 = num1 ^num2;
        num1 = num1^num2;
        cout << num1 << " ___ " << num2<<endl;
    }
    return 1;
}