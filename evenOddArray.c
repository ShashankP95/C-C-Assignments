//Even & Odd from Array:-

int main()
{
    int n, i= 0;
    printf("Enter No. of Values: ");
    scanf("%d", &n);
    
    int A[n];
    
    printf("Enter %d Values: ", n);
    for(i=0; i<n; i++)
    {
             scanf("%d", &A[i]);
    }
    
    printf("Even No. in Array are: ");
    for(i=0; i<n; i++)
    {
             if(A[i]%2==0)
             {
                          printf("%d ", A[i]);
             }
    }
             
    printf("\nOdd No. in Array are: ");
    for(i=0; i<n; i++)
    {
             if(A[i]%2==1)
             {
                          printf("%d ", A[i]);
             }
    }
    getch();
    return 0;
}
             
    
