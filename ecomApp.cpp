#include<iostream>
using namespace std;

class Ecom{
	public:
		string prodName;
		int rate, qty;
		
		void getInfo(){
					cout<<"Enter Product's Name: ";
					cin>>prodName;
					cout<<"Enter Rate: ";
					cin>>rate;
					cout<<"Enter Quantity: ";
					cin>>qty;
		}
		
		void putInfo(){
		cout<<"Product Name: "<<prodName<<endl;
		cout<<"Product Rate: "<<rate<<endl;
		cout<<"Product Quantity: "<<qty<<endl;
		cout<<endl;
		}
		

};

int main(){
	Ecom prod[10];
	int n, i;
	
	cout<<"Enter No. Of Products: ";
	cin>>n;
	
	for(i=0; i<n; i++){
		prod[i].getInfo();
	}
	
	cout<<endl;
	cout<<"Products Details Are- "<<endl;
	for(i=0; i<n; i++){
		prod[i].putInfo();
	}
return 0;
}
