#include<stdio.h>
int main()
{
    int A[10], n, i,position, value;
    
    printf("enter size of any array: ");
    scanf("%d", &n);
    
    printf("enter elements in an array: ");
    for(i=0; i<n; i++){
             scanf("%d", &A[i]);
             }
    
    printf("\nArray is :");
    for(i=0; i<n; i++){
             printf("%d ", A[i]);
             }
             
    printf("\nenter position to add value at: ");
    scanf("%d", &position);
    
    printf("\nenter element to be added at %d position: ", position);
    scanf("%d", &value);
    
    for(i=n-1; i>=position-1; i--){
               A[i+1] = A[i];
               }
    A[position-1] = value;
    
    printf("\nThe Modified Array is: ");
    for(i=0; i<=n; i++){
             printf("%d ", A[i]);
             }
    
    getch();
    return 0;
}
