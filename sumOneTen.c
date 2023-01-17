#include<stdio.h>
int add();

int main() {
    add();
    
    getch();
    return 0;
}


int add() {
    int sum = 0, i;
    for(i=0; i<=10; i++)
    { 
             sum = sum + i;
    }
    printf("The sum is: %d\n", sum);
}
    
