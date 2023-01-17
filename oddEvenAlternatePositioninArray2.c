#include<stdio.h>

int main()
{
    int A[10], i, j, n, E[], O[];
    printf("enter the size of an array: ");
    scanf("%d", &n);
    
    printf("\nenter the elements in array: ");
    for(i=0; i<n; i++){
             scanf("%d", &A[i]);
             }
                     
    for(i=0; i<n; i++){
                      if(A[i]%2!=0)
                      {
                                   printf("%d ", A[i]);
                                   }
                      else {
                             printf("%d ", A[i]);
                             }
             }
             


getch();
return 0;
}
