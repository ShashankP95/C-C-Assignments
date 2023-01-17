//ARRAYS:-

#include<stdio.h>

int main()
{
    int marks[3];
    
    printf("Enter Physics: ");
    scanf("%d", &marks[0]);
    
    printf("Enter Chemistry: ");
    scanf("%d", &marks[1]);
    
    printf("Enter Maths: ");
    scanf("%d", &marks[2]);
    
    printf("physics: %d, chemistery: %d, maths: %d", marks[0], marks[1], marks[2]);
    
    getch();
    return 0;
}
