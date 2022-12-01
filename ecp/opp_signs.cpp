#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1,num2 ;
        cin>>num1>>num2;

        if(num1>>31  == num2>>31) cout<<"Same signs"<<endl;
        else cout<<"Opposite signs"<<endl;
    }
    return 1;
}