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
    
        if((1<<k-1)&num1 )
        cout<<"Bit is set"<<endl;
        else
        cout<<"Bit not set"<<endl;

    }
    return 1;
}