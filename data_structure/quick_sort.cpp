#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int sort(int *arr, int lb, int ub)
{

    int pivot = lb;
    int i = lb;
    int j = ub;

    while (i < j)
    {
        while (arr[i] <= arr[pivot])
        {
            i++;
        }
        while (arr[j] > arr[pivot])
        {
            j--;
        }
        if (i < j)
            swap(arr[i], arr[j]);

    }
    if (i>j)
    {
        int t=arr[j];
        arr[j]=arr[pivot];
        arr[pivot] =t;
    }

    return j;
}

void partition(int *arr, int lb, int ub)
{
    if (lb < ub)
    {
        int loc = sort(arr, lb, ub);
        cout << loc << endl;
        partition(arr, lb, loc - 1);
        partition(arr, loc + 1, ub);
    }
    return;
}
int main()
{
    int n = 9;
    int arr[n] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    partition(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 1;
}