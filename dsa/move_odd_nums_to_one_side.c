#include <stdio.h>

int main() {
	int arr[5] ={-1,2,5,-4,-2};
	int count =0;
	for(int i =0 ;i<5;i++)
	if(arr[i]<0){
	    int temp = arr[count];
	    arr[count] = arr[i];
	    arr[i] = temp;
	    count++;
	}
	for(int i=0;i<5;i++)
	printf("%d \t",arr[i]);
	return 0;
}
