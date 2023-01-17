#include<iostream>
using namespace std;

//Constructor & Destructor:-

//class Demo{
//	public:
//		Demo(){
//			cout<<"Hello!";
//		}
//		Demo(int i){
//			cout<<"i="<<i;
//		}
//		
//		~Demo(){
//			cout<<"Destructor";
//		}
//};
//
//main(){
//	Demo d;
//	Demo d1(5);
//}

//function Overloading:-
//class Demo{
//	public:
//		void show(int i){
//			cout<<i;
//		}
//		void show(int i, int j){
//			cout<<i<<j;
//		}
//};
//
//main(){
//	Demo d;
//	d.show(5);
//	d.show(6,8);
//}

//constructor Overloading:-
//class Demo{
//	public:
//		Demo(int i){
//			cout<<i;
//		}
//		Demo(int i, int j){
//			cout<<i<<j;
//		}
//};
//
//main(){
//	Demo d(5), d1(6,7);
//}

//class Info{
//	public:
//		void show(){
//			cout<<"Information";
//		}
//};
//class Result{
//	public:
//		void show(){
//			Info d;
//			d.show();
//		}
//};
//
//main(){
//	Result d;
//	d.show();
//}


class Info{
	public:
		int id;
	};

class Emp: public Info
{
	public:
		void show(){
			cout<<id;
		}
};

class Students: public Info
{
	public:
		void show(){
			cout<<id;
		}
};

main(){
Emp e;
e.id=5;
e.show();

Students s;
s.id=6;
s.show();
}


