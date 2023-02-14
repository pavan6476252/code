// all aphabets must be there for atleast  once
#include <iostream>
using namespace std;
int main()
{
    string str ="The quick brown fox jumps over the dog";
    // cin >> str;
    int alpha[26] = {0};
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if ('A' <= str[i] && str[i] <= 'Z')
            index = str[i] - 'A';

        else if ('a' <= str[i] && str[i] <= 'z')
            index = str[i] - 'a';

        else
            continue;
        alpha[index]= 1;
    }
    bool istrue = true;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] ==0)
        {
            istrue = false;
            break;
        }
    }
    if (istrue)
        cout << "yes an Panagrams" << endl;
    else
        cout << "no an Panagrams" << endl;

    return 1;
}