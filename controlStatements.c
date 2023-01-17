/* Control Statements
1. if
2. if ... else
3, if ... else if ... else
4. nesting
5. switch
*/
#include<stdio.h>

int main()
{
    //IF STATEMENT
    //Curly braces not required for single statement
    int n1 = 25;
    if(n1>0)printf("positive value\n");
    
    //curly braces required for two or more statements
    int n2 = 57;
    if(n2>0)
    {
            n2++;
            printf("%d\n", n2);
    }
    //IF ELSE STATEMENT
    int n= -5;
    if(n>0)
    {
           printf("positive number: %d\n", n);
    }
    else 
    {
           printf("negative number: %d\n", n);
    }
    
    //IF... ELSE IF... ELSE STATEMENT
    int n3= 0;
    if(n3>0)
    {
           printf("positive number: %d\n", n3);
    }
    else if(n3==0)
    {
           printf("number is equal to: %d", n3);
    }
    else
    {
           printf("negative number: %d\n", n3);
    }

    
    
    getch();
    return 0;
}
            
