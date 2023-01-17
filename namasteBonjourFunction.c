#include<stdio.h>

void namaste();
void bonjour();

int main(){
    char ch;
    printf("Enter Nationaltiy for Frech press F and for Indian press I : ");
    scanf("%c", &ch);
    
    if(ch == 'i' || ch == 'I'){
         namaste();
         }
    if(ch == 'f' || ch == 'F'){
         bonjour();
         }
    
    getch();
    return 0;
}

void namaste() {
     printf("Namaste!");
     }
     
void bonjour() {
     printf("Bonjour!");
     }
     
