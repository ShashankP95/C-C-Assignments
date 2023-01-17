#include<stdio.h>
int main()
{
    int j=1,i;
    while(j<5)
    {
              i=1;
              while(i<5)
              {
                        printf("*");
                        i++;
                        }
                        printf("\n");
                        j++;
                        }
    getch();
    return 0;
}
