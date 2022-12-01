#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i,k;
        cin>>i>>k;

        int temp= i^k;

        int count =0;
        while(temp){

            if(temp& 1 ==1) count++;
            temp = temp>>1;
            // count++;
            // temp =temp &(temp-1);

        }
        cout<<count;
    }
    return 1;
}