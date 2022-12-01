#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        int count=0;
        cin>>num;
        while (num)
        {
            if(num&1) count++;
           num = num >>1;
        }
        cout<<count<<endl;
        
    }
    return 1;
}