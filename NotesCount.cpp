#include<stdio.h>

int main(){
	
	int A[10]= {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int Amt = 4595, i;
	
	printf("Total Amount: %d\n\n", Amt);
	
	for(i=0; i<9; i++){
				printf("%d ", A[i]);
		     	printf("Notes used are: %d\n",Amt/A[i]);
     			Amt %= A[i];
     		}
	
	return 0;

}
