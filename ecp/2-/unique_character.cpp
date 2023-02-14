#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
                count[((char)s[j]) - 'a']++;
        }
    }
    int totalCount=0;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0){
            totalCount++;
            cout<<(char)(i+'a');
            }
    }
    cout<<endl;
    cout << totalCount;

    return 1;
}
