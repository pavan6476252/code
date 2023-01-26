#include <iostream>
using namespace std;

int sum(int num)
{
    if (num == 0)
        return 0;
    return sum(num / 10) + num % 10;
}

int main()
{

    cout << sum(11);
    return 1;
}