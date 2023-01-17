// 3 Items total price with 18% GST using Array

#include<stdio.h>

int main()
{
    float price[3];
    
    printf("Enter 3 prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);
    
    printf("total price 1: %f, ", price[0]+price[0]*0.18);
    printf("total price 2: %f, ", price[1]+price[1]*0.18);
    printf("total price 3: %f ", price[2]+price[2]*0.18);
    
    getch();
    return 0;
}
