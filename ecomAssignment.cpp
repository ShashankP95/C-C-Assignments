#include<iostream>
using namespace std;
void payment();

class Ecom{
	public:
		string prodName;
		int rate, qty;
		
		getInfo(){
			cout<<"enter product name: ";
			cin>>prodName;
			
			cout<<"enter rate: ";
			cin>>rate;
			
			cout<<"enter quantity: ";
			cin>>qty;
		}
		 putInfo(){
			cout<<"Product Name: "<<prodName<<endl;
			cout<<"Rate: "<<rate<<endl;
			cout<<"Quantity: "<<qty<<endl;
			cout<<endl;
		}
};

int main(){
	
	string user;
	int pw;
	
	Ecom prod[10];
	int n,i,j,k;
	
	cout<<"Enter Username: ";
	cin>>user;
	
	cout<<"Enter Password: ";
	cin>>pw;
	
	if(user == "abcd" && pw == 1234){
		cout<<"Valid Credentials!";
		cout<<endl;
			cout<<"enter no. of products- ";
			cin>>n;
		for(i=0; i<n; i++){
			prod[i].getInfo();
	}
	cout<<endl;
	cout<<"Product details: "<<endl;
	
	for(i=0; i<n; i++){
		prod[i].putInfo();
	}
	payment();
	} else {
		cout<<"Invalid Credentials! Try Again!!";
	}	
	
}

void payment(){
	string upiId;
	int upiPin;
	
	cout<<"Enter UPI ID for Payment: ";
	cin>>upiId;
	
	cout<<"Enter UPI PIN:  ";
	cin>>upiPin;
	
	if(upiId == "shashank" && upiPin == 0000){
		cout<<"Payment Done!";
	} else {
		cout<<"Invalid Credentials, Payment Declined!!";
	}
}

