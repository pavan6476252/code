#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int flag =0;
        for(int i=2;i<=n*0.5;i++)
        if(n%i==0) flag =1;

        if(flag==1)  cout<<"Not prime"<<endl;
        else cout<<"Prime no"<<endl; 
    }
    return 1;
}