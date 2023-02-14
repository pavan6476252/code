#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int move;
    cin >> move;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>= 'a'&&s[i]<= 'z')
        cout << (char)(((s[i] - 'a') + move) % 26 + 'a');
        else
        cout << (char)(((s[i] - 'A') + move) % 26 + 'A');
    }

    return 1;
}
