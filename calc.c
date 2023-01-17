#include<stdio.h>

int add(int a, int b);
int sub(int x, int y);
int mul(int j, int k);
float div(float p, int q);

int main(){
    int a, b;
    
    printf("enter first no. to add : ");
    scanf("%d", &a);
    printf("enter second no. to add : ");
    scanf("%d", &b);
    
    int A = add(a, b);
    printf("sum is: %d\n", A);
    
    int x,y;
    
    printf("enter first number to subtract : ");
    scanf("%d", &x);
    printf("enter second number to subtract : ");
    scanf("%d", &y);
    
    int S = sub(x, y);
    printf("subtraction is: %d\n", S);
    
    int j,k;
    
    printf("enter first number to multiply : ");
    scanf("%d", &j);
    printf("enter second number to multiply : ");
    scanf("%d", &k);
    
    int M = mul(j, k);
    printf("multiplication is: %d\n", M);
    
    float p; 
    int q;
    
    printf("enter first number to divide : ");
    scanf("%f", &p);
    printf("enter second number to divide : ");
    scanf("%d", &q);
    
    float D = div(p, q);
    printf("division is: %f\n", D);
    
    
    getch();
    return 0;
}

int add(int a, int b) {
     return a+b;
     }
     
int sub(int x, int y) {
     return x-y;
     }

int mul(int j, int k) {
     return j*k;
     }

float div(float p, int q) {
     return p/q;
     }
