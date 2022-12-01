#include <iostream>
using namespace std;

void fun(int n , int i ,int j){
        if(n==0){
            return ;
        }
        cout<<i+j << " ";
        fun(n-1,j ,i+j);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,i=0,j=1;
        cin>>n;
        cout<<i<<" "<<j<<" ";

        fun(n-2,i,j);

    }
    return 1;
}

