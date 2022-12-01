#include <iostream>
using namespace std;
int gcd(int num1, int num2)
{
   if(num1 ==0) return num2;
   if(num2 ==0) return num1;
   
  return gcd(num2%num1 ,num1 );
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num1, num2;
        cin >> num1>> num2;
        int k = num1*num2 /  gcd(num1, num2);
        cout<<k;
    }
    return 1;
}