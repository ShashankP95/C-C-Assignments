#include<stdio.h>
/* Conditional Operators ?:
(a>b)?a:b;
*/

int main()
{    
    int n1 = 20, n2 = 26, n3 = 15, n4 = 500;
    (n1>n2 && n1>n3 && n1>n4)?printf("n1: %d\n",n1):(n2>n1 && n2>n3 && n2>n4)?printf("n2: %d\n%",n2):(n3>n1 && n3>n2 && n3>n4)?printf("n3: %d\n", n3):printf("n4: %d\n", n4);

    
    int n5 = 100, n6 = 195, n7 = 90;
    (n5>n6 && n5>n7)?printf("n5: %d\n",n5):(n6>n7)?printf("n6: %d\n",n6):printf("n7: %d\n",n7);
    
    int num1 = 90, num2 = 125;
    (num1>num2)?printf("num1: %d",num1):printf("num2: %d",num2);
    
    getch();
    return 0;
}
