#include<iostream>
using namespace std;

class Demo{
	public:
		int n1, n2;
		void show(){
			cout<<n1+n2;
		}
	
};

main(){
	Demo d;
	cout<<"Enter n1: ";
	cin>>d.n1;
	
	cout<<"Enter n2: ";
	cin>>d.n2;
	
	d.show();
}


