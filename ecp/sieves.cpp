#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int range;
        cin>> range;

        vector<bool> v (range+1 , true);

        for(int i=2;i<=range;i++){
            if(v[i]){
                for(int j = i*i ;j<range+1;j = j+i){
                    v[j] = false;
                }
            }
        }

        for(int i =2;i<range+1;i++){
            if(v[i]==true){
                cout<<i<<" ";
            }
        }
        
    }
    return 1;
}