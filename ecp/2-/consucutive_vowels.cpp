#include <iostream>
using namespace std;
int main()
{
    string str = "A1 B@ d  aeidc";
    int count=0;
    for (int i = 1; i < str.length(); i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') && (str[i - 1] == 'a' || str[i - 1] == 'e' || str[i - 1] == 'i' || str[i - 1] == 'o' || str[i - 1] == 'u'))
        {
            count++;
        }
    }
    cout<<count;
    return 1;
}