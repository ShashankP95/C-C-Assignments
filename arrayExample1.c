#include<stdio.h>
int main()
{
    int A[5];
    int n;
    int i = 0;
    
    printf("Enter No. of items: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
             printf("Enter item cost ");
             scanf("%d", &A[i]);
    } 
        for(i=0; i<n; i++)
    {
            printf("%d ", A[i]);
    }
    
    
    getch();
    return 0;
}
