#include<stdio.h>

int main()
{
    int age[3];
    int i = 0;
    printf("Enter 3 input values: ");
    for(i=0; i<3; i++)
    {
             scanf("%d", &age[i]);
    }
    for(i=0; i<3; i++)
    {
             printf("%d ", age[i]);
    }

getch();
return 0;
}
