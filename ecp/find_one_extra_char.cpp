#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        string b;
        cin >> a >> b;

        int res = 0, i;
        for (i = 0; i < a.length(); i++)
        {
            res = res ^ a[i];
        }
        for (i = 0; i < b.length(); i++)
        {
            res = res ^ b[i];
        }
        cout<<(char)(res)<<endl;    
    }
    return 1;
}