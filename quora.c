#include <stdio.h> 
 
int 
main(void) 
{ 
    int sum,digit1,digit2,digit3,digit4; 
    printf("enter four digit integer:\n"); 
    scanf("%d", &digit1,&digit2,&digit3,&digit4); 
 
    digit1=(digit1%1000)/10; 
    digit2=(digit2%1000)/10; 
    digit3=(digit3%1000)/10; 
    digit4=(digit4%1000)/10; 
 
    /*calculation*/ 
    sum=digit1+digit2+digit3+digit4; 
 
    printf ("answer is: %d\n",sum);
    getch();
    return (0); 
}
