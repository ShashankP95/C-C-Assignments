#include<stdio.h>

int main(){
	char str[50];
	int i, j , k;
	
	printf("Enter String: ");
	scanf("%s", str);
	
	int n = strlen(str);
	

		for(i=0; i<n; i++){
		{
			for(j=i+1; j<n;){
				if(str[i] == str[j]){
					for(k=j; k<n; k++){
						str[k] = str[k+1];
					}
					n--;
				} else{
				j++;
				}
			}
		}
	}

	
	printf("\nAfter Deleting Duplicate Characters, New String: %s", str);
}
