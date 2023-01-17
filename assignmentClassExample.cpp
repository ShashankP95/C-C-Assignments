#include<iostream>
using namespace std;

class Students{
	public:
	string name;
	int rollNum; 
	float sub1, sub2;
	information(){
		cout<<"enter name: ";
		cin>>name;
		cout<<"enter rollNum: ";
		cin>>rollNum;
		cout<<"name="<<name<<endl;
		cout<<"rollNum="<<rollNum<<endl;
	}
	float test1(){
		cout<<"enter marks of sub1 in test 1: ";
		cin>>sub1;
		cout<<"enter marks of sub2 in test 1: ";
		cin>>sub2;
		return sub1+sub2;
	}
	float test2(){
		cout<<"enter marks of sub1 in test 2: ";
		cin>>sub1;
		cout<<"enter marks of sub2 in test 2: ";
		cin>>sub2;
		return sub1+sub2;
	}
	float result(){
		cout<<test1()+test2();
	}
		};

main(){
	Students s;
	s.information();
	s.result();
	
}

/*class Students{
	public:
		string name;
		int rollnum,sub1, sub2;
		
	void information(){
		int test1;
		int test2;
	}
};
int main(){
	int test1, test2;
	test1.sub1 = 80;
	test1.sub2 = 78;
	
	test2.sub1 = 95;
	test2.sub2 = 89;
	
	cout<<"marks of sub1: ";
	cout<<test1.sub1<<test2.sub1;
	
	cout<<"marks of sub2: ";
	cout<<test1.sub2<<test2.sub2;
	
	return 0;
}*/
