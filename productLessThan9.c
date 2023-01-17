#include<stdio.h>
int main()
{
    int A[]={5,8,7,6,4,2,7}, i, n=7, prod, element;
    
    printf("resultant array is: ");
    for(i=n-2; i>0; i--){
               prod = A[i] * 2;
               if(prod > 9){
                      element = 9-A[i];
                      element = element * 2;

                     
             } else{
                    printf("\nelement was: %d ",A[i]);
                    }
             printf("\n resultant element: %d ", element);
             
    }

getch();
return 0;
}
