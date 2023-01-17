#include<stdio.h>

int main()
{
    int A[10], n, i, pos, value;
    
    printf("enter size of array: ");
    scanf("%d", &n);
    
    printf("enter elements in array: ");
    for(i=0; i<n; i++)
    {
             scanf("%d", &A[i]);
    }
    printf("Array is: ");
    for(i=0; i<n; i++)
    {
             printf("%d ", A[i]);
    }
    
    printf("\nenter position to add element: ");
    scanf("%d", &pos);
    
    printf("\nenter element to be added: ");
    scanf("%d", &value);
    
    for(i=n-1; i>=pos-1; i--)
    {
               A[i+1] = A[i];
               
    }
    A[pos-1] = value;
    
    printf("\nThe new array is: ");
    for(i=0; i<=n; i++)
    {
             printf("%d ", A[i]);
    }
    
getch();
return 0;
}
