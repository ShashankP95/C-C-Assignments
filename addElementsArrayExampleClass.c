#include<stdio.h>
int main()
{
   int A[10], i, n;
    
    printf("size of an array: ");
    scanf("%d", &n);
    
    printf("enter elements in array: ");
    for(i=0; i<n; i++){
             scanf("%d", &A[i]);
             }
    for(i=n; i>0; i--)
    {
             A[i] = A[i-1];
             }
    A[i] = 9;
    
    printf("The Array is: ");
    for(i=0; i<n; i++){
             printf("%d", A[i]);;
             }
             
    getch();
    return 0;
}
    
    
