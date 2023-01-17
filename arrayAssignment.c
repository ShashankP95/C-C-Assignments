#include<stdio.h>
int main() {
    int A[10], E[10], O[10], N[20];
    int n, i, j, sE, sO, k1=0, k2=0, sum=0, sumE=0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    //Assigning Array
    printf("Enter elements into array: ");
    for(i=0; i<n; i++)
    {
              scanf("%d", &A[i]);
              }
    
    //Sum of all elements in array         
    for(i=0; i<n; i++) {
             sum = sum + A[i];
             }
             printf("The sum is: %d", sum);
    
    //Splitting Even & Odd Array
    for(i=0; i<n; i++)
    {
             if(A[i]%2==0) {
                           E[k1] = A[i];
                           k1++;
             }
             else {
                  O[k2] = A[i];
                  k2++;
             }
    }
    printf("\nElements of Even array are: ");
    for(i=0; i<k1; i++){
             printf("%d ", E[i]);
             }
    
    printf("\nElements of Odd array are: ");
    for(i=0; i<k2; i++){
             printf("%d ", O[i]);
             }
    
    //Sum Of Even Array
    for(i=0; i<k1; i++){
             sumE = sumE + E[i];
             }
             printf("\nThe Sum of Even Array is: %d", sumE);
             
    //Assigning new array containing elements from Odd & Even Array
    printf("\nEnter size of Even Array: ");
    scanf("%d", &sE);
    
    printf("Enter size of Odd Array: ");
    scanf("%d", &sO);
    
    //length of new array N
    int k = sE+sO;
    
    //sorting odd array first and then even array and storing in new array 'N'
    for(i=0,j=0; i<sO; i++,j++)
    {
                 N[i] = O[j];
    }
    for(i=0; i<sE; i++,j++)
    {
             N[j] = E[i];
    }
    
    
    printf("Elements of New array are: ");
    for(i=0; i<k; i++){
             printf("%d ", N[i]);
             }
                 
    
             
getch();
return 0;
} 
    
