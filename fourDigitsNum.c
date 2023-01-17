#include<stdio.h>
void addDigits(int n);

int main()
{
    int n;
    printf("Enter 4 digits number: ");
    scanf("%d",&n);

if(n >= 1000 && n <= 9999){
     addDigits(n);
     }
         else { 
                 printf("Invalid number"); 
          }
    
    getch();
    return 0;
}

          
void addDigits(int n) {
     int r, sum = 0;
              while(n>0){
                    r = n % 10;
                    sum = sum + r;
                    n = n / 10;
                    } printf("Sum is: %d", sum);
              }


    
