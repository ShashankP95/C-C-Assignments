#include<stdio.h>

int main(){
	char Name[20];
	printf("Enter Name: ");
	scanf("%s", Name);
	char f;
	int n = strlen(Name), i, j, k;
	
//swapping first and last character
	
	f = Name[0];
	Name[0] = Name[n-1];
	Name[n-1] = f;
	
	printf("Swapped String:  %s", Name);
	
	return 0;
}
