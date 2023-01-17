#include<stdio.h>

int main(){
	int A[10];
	int n, i;
	
	printf("Enter Size of Array: ");
	scanf("%d", &n);
	
	printf("Enter elements in Array: ");
	
	for(i=0; i<n; i++){
		scanf("%d", &A[i]);
	}
	
	printf("Array is: ");
		for(i=0; i<n; i++){
			printf("%d ",A[i]);
	}
	
	printf("\nReversed Array is: ");
	for(i=n-1; i>=0; i--){
		printf("%d ", A[i]);
	}
	
	return 0;
	
}
