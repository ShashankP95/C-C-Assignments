#include<stdio.h>
int main()
{
    int A[]={5,8,7,6,4,2,7}, i, n=7, prod, element;
    
    printf("array is: ");
    for(i=0; i<n; i++){
             printf("%d ", A[i]);
             } 
    for(i=n-2; i>0; i-=2){
               prod = A[i] * 2;
               if(prod > 9){
                      element = A[i]-9;
                      element = element * 2;
                      } 
                      for(i=0; i<n; i++){
                               scanf("%d", &A[i]);
             }
//             printf("\n%d ", A[i]);
             
    }
    
    for(i=0; i<n; i++){
    	printf("%d",A[i]);
	}

getch();
return 0;
}
