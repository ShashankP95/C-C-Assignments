#include<stdio.h>

fun(int A[], int n)
{
        int i;
        for(i=0; i<n; i++)
        {
                        printf("%d", A[i]);
        }
}

main()
{
      int A[]={5,9,8,3,2};
      int n = 5;
      
      fun(A,n);
      
      getch();
}
