#include <iostream>
using namespace std;
int func(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n * func(n-1);

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<func(n);
    }
    return 1;
}