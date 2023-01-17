#include<stdio.h>

/*LOOPS:-
1. WHILE
2. DO - WHILE
3. FOR
*/

int main()
{
    //WHILE LOOP- clock example:-
    int i = 1;
    while(i <= 12)
    {
              printf("%d\n", i);
              i++;
    }
    //DO - WHILe LOOP-
    int n = 1;
    do {
        printf("%d\n", n);
        n++;
        } while (n<=12);
    //FOR LOOP-
     int num = 1;
     for (num=1; num<=12; num++)
     {
         printf("%d\n", num);
     }
    
    
    getch();
    return 0;
}        
