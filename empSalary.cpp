#include<iostream>
using namespace std;

class Employee{
	public:
	string empName, empDpt;
	int empID, salary, atd; 
	information(){
		cout<<"enter name: ";
		cin>>empName;
		cout<<"enter Department: ";
		cin>>empDpt;
		cout<<"empName="<<empName<<endl;
		cout<<"empDpt="<<empDpt<<endl;
	}
	int getSalary(){
		cout<<"enter Salary: ";
		cin>>salary;
		cout<<"enter attendance: ";
		cin>>atd;
		return ((salary/30)*atd);
	}
	void paySalary(){
		cout<<"Paybale Salary is: "<<getSalary();
	}
		};

main(){
	Employee d;
	d.information();
	d.paySalary();
}
