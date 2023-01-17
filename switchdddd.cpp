#include<iostream>
using namespace std;

int main()
{
    int n1,n2,ch;
    
    cout<<"Enter n1: ";
    cin>>n1;
    
    cout<<"enter n2: ";
    cin>>n2;
    
    cout<<"enter 1 for add & 2 for sub";
    cin>>ch;
    
    switch(ch){
               case 1: cout<<n1+n2;
               break;
               
               case 2: cout<<n1-n2;
               break;
               
               default: cout<<"Invalid Number";
               } 

getch();
return 0;
}
