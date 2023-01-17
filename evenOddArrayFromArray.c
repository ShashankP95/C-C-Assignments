//Even & Odd Arrays from Array:-

#include<stdio.h>

int main()
{
    int A[10], E[10], O[10];
    int i=0, k1=0, k2=0, n;
    
    
    printf("Enter size of the Array: ");
    scanf("%d", &n);
    
    printf("Enter elements in the Array: ");
    for(i=0; i<n; i++)
    {
             scanf("%d", &A[i]);
    }
    
    for(i=0; i<n; i++)
    {
             if(A[i]%2==0)
             {
                          E[k1] = A[i];
                          k1++;
             }
             else
             {
                          O[k2] = A[i];
                          k2++;
             }
    
    }
    printf("\nArray elements of even values are: ");
    for(i=0; i<k1; i++)
    {
             printf("%d ", E[i]);
    }
    
    printf("\nArray elements of odd values are: ");
    for(i=0; i<k2; i++)
    {
             printf("%d ", O[i]);
    }
    
getch();
return 0;
}
