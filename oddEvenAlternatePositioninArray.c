#include<stdio.h>

int main(){
       int a[]={9,3,4,7,8}, even, odd, i;
       printf("\n odd");
       for(i=0;i<5;i++){
       if(a[i]%2!=0)
       scanf("%d",&odd);
       }
       printf("\n even");
       for(i=0;i<5;i++){
       if(a[i]%2==0)
       scanf("%d",&even);
       }
       
       for(i=0; i<5; i++)
{
       printf("%d", odd[i]);
       }
       
getch();
return 0;
}
