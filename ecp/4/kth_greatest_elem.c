#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}
void main()
{
    int arr[5] = {5, 3, 7, 78, 5};
    int n = 5;

    qsort(arr, n, sizeof(int), cmp);
    for (int i = 0; i < 2; i++)
    {
        printf("%d\t", arr[i]);
    }
}