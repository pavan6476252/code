#include <iostream>
using namespace std;

int main()
{
    string str = "A1 B@ d  adc";
    // cin >> str;

    int vowels = 0, consonant = 0, specialChar = 0,
        digit = 0;

    for (int i = 0; i < str.length(); i++)
    {

        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z'))
        {

            ch = tolower(ch);

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u')
                vowels++;
            else
                consonant++;
        }
        else if (ch >= '0' && ch <= '9')
            digit++;
        else
            specialChar++;
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonant: " << consonant << endl;
    cout << "Digit: " << digit << endl;
    cout << "Special Character: " << specialChar << endl;

    return 1;
}