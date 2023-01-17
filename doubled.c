#include<stdio.h>

int main(){
	int A[] = {2,4,6,1,7,8}, i, n=6;
	
	printf("Original Array: ");
	for(i=0;i<n;i++){
		printf("%d ", A[i]);
	}
	
	printf("\n\nModified Array is: ");
	
	for(i=n-2; i>=0; i=i-2){
			if(A[i]%9!=0)
				A[i]%=9;
			else{
				printf("sorry");
				break;
			}
			A[i] = A[i]*2;
	while(A[i]>9){
		A[i] = A[i]-9;
		A[i] = A[i]*2;
	} 
	
	printf("%d ", A[i]);
	}

	
	return 0;
}
	

