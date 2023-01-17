#include<iostream>
using namespace std;

//Public Variable:-
/*
class Demo{
	public:
		void show(){
			cout<<"Hello!";
		}
};

main(){
	Demo d;
	d.show();
}
*/

//accessing variable in main(outside class):-
/*
class Demo{
	public:
		int id;
		void show(){
			cout<<id;
		}
};

main(){
	Demo d;
	d.id = 5;
	d.show();
}
*/

//Private Variable:- (private variable are not accessible outside the class)
/*
class Demo{
	private:
		int id;
		public:
			void show(){
				cout<<id;
			}
};

main(){
	Demo d;
	d.id = 6;
	d.show(); //(this will return an error as private variable is not accessible outside class)
}
*/

//To Access Private Variable outside class:-

//1st Method-
/*
class Demo{
	private:
		int id;
		public:
			void show(){
				id=7;
				cout<<id;
			}
};

main(){
	Demo d;
	d.show();
}
*/

//2nd Method:-
/*
class Demo{
	private:
		int id;
		public:
			void setid(int i){
				id=i;
			}
			void show(){
				cout<<id;
			}
};

main(){
	Demo d;
	d.setid(8);
	d.show();
}
*/

//3rd Method:-(using 'this' keyword)
/*
class Demo{
	private:
		int id;
		public:
			void setid(int id){
				this->id=id;
			}
			void show(){
				cout<<id;
			}
};

main(){
	Demo d;
	d.setid(55);
	d.show();
}
*/

//4th Method:- (Printing Outside Class)
/*
class Demo{
	private:
		int id;
		public:
			void setid(int id){
				this->id=id;
			}
			int getid(){
				return id;
			}
};

main(){
	Demo d;
	d.setid(66);
	cout<<d.getid();
}
*/

//Special Function:- (CONSTRUCTOR)
/*
Notes:- It has 3 properties,
1. Has same name that of class
2. No return type
3. No need to call a function
*/
/*
class Demo{
	public:
		Demo(){
			cout<<"Hello!";
		}
};

main(){
	Demo d;
}
*/

//Types of Constructor:-
/*
1. Default - (with no arguments)
2. Parameterized
3. Copy Constructor
*/

//Constructor Overloading:-

class Demo{
	public:
		Demo(int i){
			cout<<i;
		}
	Demo(int i, int j){
		cout<<i<<j;
	}
};
main(){
	Demo d(6), d1(7, 9);
}
