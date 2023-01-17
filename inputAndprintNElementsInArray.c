#include<stdio.h>

int main()
{
	int A[10], n, i;
	
	printf("Enter size of an array: ");
	scanf("%d", &n);
	
	printf("enter elements in array: ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
		
	}
	
	printf("The resultant Array is: ");
	for(i=0; i<n; i++)
	{
		printf("%d ", A[i]);
	}
	
	return 0;
}
