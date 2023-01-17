#include<stdio.h>

int main(){
	int Arr[]={2,5,7,3,1,8,5}, i, n=7,Doubled,E;
	
	printf("Original Array: ");
	for(i=0; i<n; i++){
		printf("%d ", Arr[i]);
	}
//	
	printf("\n\nModified Array: ");
	for(i=n-2; i>=0; i=i-2){
		Doubled = Arr[i]*2;
		if(Doubled>9){
			while(Doubled>9){
				
				}
				break;
			}else{printf("%d ", Doubled);
		}
}
//printf("\n\nModified Array: ");
//for(i=n-2; i>=0; i=i-2){
//	Doubled = Arr[i]*2;
//	if(doubled>9){
//			while(Doubled<9){
//			E= Doubled - 9;
//			E = E*2;
//		}
//		break; 
//		printf("%d", E);
//	} else {
//		printf("%d", Doubled)
//	}
//
//}
//
//	
	return 0;
}
