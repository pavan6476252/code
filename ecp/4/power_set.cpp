#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<pow(2,s.length());i++){
        for(int j=0;j<pow(2,s.length());j++){
            if(i & (1<<j)){
                cout<<s[j];
            }
        }
        cout<<endl;
    }
 
    return 1;
}