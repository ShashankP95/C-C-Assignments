#include<stdio.h>

int main()
{
    int n1, n2, ch;
    printf("enter value of n1: ");
    scanf("%d", &n1);
    
    printf("enter value of n2: ");
    scanf("%d", &n2);
    
    printf("enter 1 for add and 2 for sub: ");
    scanf("%d", &ch);
    switch(ch){
               case 1: printf("%d", n1+n2);
               break;
               
               case 2: printf("%d", n1-n2);
               break;
               
               default: printf("invalid number!");
               }
    getch();
    return 0;
}
