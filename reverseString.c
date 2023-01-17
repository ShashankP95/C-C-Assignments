#include<stdio.h>

int main(){
	char str[50];
	int n, i;
	
	printf("Enter A string: ");
	scanf("%s", str);
	
	n = strlen(str);
	
	printf("\nReversed String is: ");
	
	for(i=n-1; i>=0; i--){
		printf("%c", str[i]);
	}
	
	return 0;
}
