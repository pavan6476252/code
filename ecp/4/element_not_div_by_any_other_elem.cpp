// C++ code for naive implementation
#include<iostream>
using namespace std;


void printNonDivisible(int A[], int B[],
						int n, int m)
{
	for (int i = 0; i < m; i++)
	{
		int j = 0;
		for (j = 0; j < n; j++)
			if( B[i] % A[j] == 0 )
				break;

		if (j == n)
			cout << B[i] << endl;
	}
}

// Driver code
int main()
{
	int A[] = {100, 200, 400, 100};
	int n = sizeof(A)/sizeof(A[0]);
	int B[] = {190, 200, 87, 600, 800};
	int m = sizeof(B)/sizeof(B[0]);
	printNonDivisible(A, B, n, m);
	return 0;
}
