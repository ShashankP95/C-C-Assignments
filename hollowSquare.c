#include<stdio.h>

int main(){
	int i, j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=4; j++){
			if(i==1||i==2 && j==1||j==2||j==3||j==4){
				printf("*");
			}
			else if(i==2||i==3|| && j==1||j==4){
				
				printf("*");
			}
			else{
				printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
