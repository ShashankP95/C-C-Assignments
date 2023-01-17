//Sum of Array:-

#include<stdio.h>
int main()
{
    int A[5], i=0, sum=0, n;
    
    printf("Enter No. of values to be added: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
             printf("Enter values: ");
             scanf("%d", &A[i]);
    }
        for(i=0; i<n; i++)
    {
             sum = sum + A[i];
    }
    printf("total sum: %d", sum);
    
    
getch();
return 0;
}
