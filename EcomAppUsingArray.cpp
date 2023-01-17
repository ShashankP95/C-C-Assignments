#include<iostream>
using namespace std;


class Ecom {
	public:
		string prod[5]={"TV", "Fridge", "Mobile", "Juicer", "Grinder" }, c, p1;
		float price[5]={25000, 20000, 50000, 4000, 1000};
		int qty[5]={2, 3, 1, 5, 5}, i, n=5, sel, r1=0, r2=0, r3=0, r4=0, r5=0, q1, q2, q3, q4, q5, m, Amt;
		
		void Info(){
			cout<<"\nAvailable Products and their Stocks are: \n"<<endl;
			cout<<"Products"<<"	"<<"Price"<<"		"<<"Quantity"<<endl;
			
			for(i=0; i<n; i++){
				cout<<prod[i]<<"		"<<price[i]<<"		"<<qty[i]<<endl;
			}
		}
		
		
		void selProd(){
			
			cout<<"\nPress Y, If you want to purchase anything: "<<endl;
			cin>>c;
			cout<<"\nEnter No. of Products you want to purchase: ";
			cin>>m;
			
			if(c =="y"||c =="Y")
			{
				for(i=0; i<m; i++){
					cout<<"\nSelect Products you want to purchase from below given options: "<<endl;
					cout<<endl;
					cout<<"Press 1 for TV,"<<"	"<<"Press 2 for Fridge,"<<"	"<<"Press 3 for Mobile,"<<"	"<<"Press 4 for Juicer,"<<"	"<<"Press 5 for Grinder"<<endl;
					cout<<"\nEnter Your Choice: ";
					cin>>sel;
					
					
					cout<<endl;
					
					if(sel==1)
					{	
						cout<<prod[0]<<"	"<<qty[0]<<"	"<<price[0]<<endl;
						cout<<endl;
						cout<<"Purchase Quantity= ";
						cin>>q1;
						
						if(q1>qty[0]){
							cout<<"\nInvalid Quantity!";
						} else{
								r1=q1*price[0];
								cout<<"\nAmount= "<<r1<<endl;				
								}
					}
					else if(sel==2)
					{
						cout<<prod[1]<<"	"<<qty[1]<<"	"<<price[1]<<endl;
						cout<<endl;
						cout<<"Purchase Quantity= ";
						cin>>q2;
						if(q2>qty[1]){
						cout<<"Invalid Quantity!";
						}
						else{
						r2=q2*price[1];
						cout<<"Amount= "<<r2<<endl;
						}
				
					}
			
					else if(sel==3)
					{
						cout<<prod[2]<<"	"<<qty[2]<<"	"<<price[2]<<endl;
						cout<<endl;
						cout<<"Purchase Quantity= ";
						cin>>q3;
						if(q3<qty[2]){
						cout<<"Invalid Quantity!";
					}
					else{
					r3=q3*price[2];
					cout<<"Amount= "<<r3<<endl;
						}
					}
					else if(sel==4)
					{
						cout<<prod[3]<<"	"<<qty[3]<<"	"<<price[3]<<endl;
						cout<<endl;
						cout<<"Purchase Quantity= ";
						cin>>q4;
						if(q4>qty[3]){
						cout<<"Invalid Quantity!";
						}
						else{
						r4=q4*price[3];
					cout<<"Amount= "<<r4<<endl;
				}
				
			}
			else if(sel==5)
			{
				cout<<prod[4]<<"	"<<qty[4]<<"	"<<price[4]<<endl;
				cout<<endl;
				cout<<"Purchase Quantity= ";
				cin>>q5;
				if(q5>qty[4]){
					cout<<"Invalid Quantity!";
				}
				else{
					r5=q5*price[4];
					cout<<"Amount= "<<r5<<endl;
				}
				
			}
		}
				cout<<endl;
				int T = r1+r2+r3+r4+r5;
				cout<<"\nTotal Amount= "<<T<<endl;
				
				
				string upiId;
				int upiPin;
			
				cout<<endl;
				in:
				cout<<"Enter UPI ID for Payment: ";
				cin>>upiId;
				cout<<endl;
	
				cout<<"Enter UPI PIN:  ";
				cin>>upiPin;
				cout<<endl;
	
			if(upiId == "shashank" && upiPin == 0000){
				cout<<"Payment Done!";
		} else{
				cout<<"Invalid Credentials, Payment Declined!! Please Try Again!"<<endl<<endl;
				goto in;
				}
		
		cout<<"\nYour Invoice: "<<endl;
		 cout<<endl;
		 cout<<"Product"<<"		"<<"Price/Item"<<"		"<<"Quantity"<<"		"<<"Amount"<<endl;
		 cout<<endl;
		 cout<<prod[0]<<"		"<<price[0]<<"			"<<q1<<"			"<<r1<<endl<<endl;
		 cout<<prod[1]<<"		"<<price[1]<<"			"<<q2<<"			"<<r2<<endl<<endl;
		 cout<<prod[2]<<"		"<<price[2]<<"			"<<q3<<"			"<<r3<<endl<<endl;
		 cout<<prod[3]<<"		"<<price[3]<<"			"<<q4<<"			"<<r4<<endl<<endl;
		 cout<<prod[4]<<"		"<<price[4]<<"			"<<q5<<"			"<<r5<<endl<<endl;
	}
	
	
		
	
	else {
				cout<<"Thank You!!";
		}
	}
	
};
	
	
	
	main(){
		string user;
		int pw;
		Ecom e;
		
		cout<<endl;
		enter:
		
		cout<<"Enter Username: ";
		cin>>user;
	
		cout<<"Enter Password: ";
		cin>>pw;
	
	if(user == "abcd" && pw == 1234){
		cout<<"Logged In!"<<endl;
		cout<<endl;
		e.Info();
		e.selProd();
		cout<<endl;
	}
	
	else {
		cout<<"Invalid Credentials! Try Again!!"<<endl<<endl;
		goto enter;
		}
}



