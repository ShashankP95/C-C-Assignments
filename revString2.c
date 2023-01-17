#include<stdio.h>

int main(){
	char str[50], ch;
	int l,i;
	printf("Enter A String: ");
	scanf("%s", str);
	
	l = strlen(str);
	
	
	for(i=0; i<l/2; i++){
		ch = str[i];
		str[i] = str[l-1-i];
		str[l-1-i] = ch;
	}

	printf("Reversed String is: %s", str);
	return 0;
	
}
