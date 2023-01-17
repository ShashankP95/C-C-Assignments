#include<stdio.h>

void printTable(int n);

int main() {
    int n;
    
    printf("enter number: ");
    scanf("%d", &n);
    
    printf("\ntable of %d is :\n", n);
    printTable(n);
    getch();
    return 0;
}

void printTable(int n) {
     int i;
     for (i=1 ; i<=10 ; i++) {
         printf("\n\t\t%d\n", n*i);
         }
     }
     
