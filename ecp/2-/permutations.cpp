#include <bits/stdc++.h>
using namespace std;

// void permutations(string a,int st,int n){
//     if(st==n){
//         cout<<a<<endl;
//     }
//     for(int i=st;i<=n;i++){
//           swap(a[st], a[i]);
//           permutations(a, st + 1, n);
//           swap(a[st], a[i]);
            
//     }
// }
void permutations(string str,int st){
    if(st==str.length()-1){
    cout<<str<<endl;
    return;}
    for(int i = st;i<str.length();i++)
    {
        swap(str[i], str[st]);
        permutations(str,st+1);
        swap(str[i], str[st]);
    }
}

int main()
{
    string s ="abc";
    int n =3;
    permutations(s,0);
    return 1;
}