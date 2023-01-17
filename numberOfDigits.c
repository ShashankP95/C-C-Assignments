#include<stdio.h>

int main()
{
    int count = 0;
    int i = 5443261;
    while(i!=0)
    {
               i /= 10;
               count++;
    } printf("Number of digits: %d", count);
    
getch();
return 0;
}
