// by re-arranging a strig it will be equal to another string

#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int alpha1[26] = {0};
    int alpha2[26] = {0};
    if (s1.length() != s2.length())
        cout << "not same strings" << endl;
    else
    {

        for (int i = 0; i < s1.length(); i++)
        {
            alpha1[s1[i] - 'a']++;
        }
        for (int i = 0; i < s2.length(); i++)
        {
            alpha2[s2[i] - 'a']++;
        }
        bool isSame = true;
        for (int i = 0; i < 26; i++)
        {
            if (alpha1[i] != alpha2[i])
            {
                isSame = false;
            }
        }
        if (isSame)
            cout << "same string" << endl;
        else
            cout << "different string" << endl;
    }
    return 1;
}