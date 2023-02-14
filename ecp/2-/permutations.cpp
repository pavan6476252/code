#include <bits/stdc++.h>
using namespace std;

void permutations(string a,int st,int n){
    if(st==n){
        cout<<a<<endl;
    }
    for(int i=st;i<=n;i++){
          swap(a[st], a[i]);
          permutations(a, st + 1, n);
          swap(a[st], a[i]);
            
    }
}

int main()
{
    string s ="abc";
    int n =3;
    permutations(s,0,n-1);
    return 1;
}