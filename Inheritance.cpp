#include<iostream>
using namespace std;

class Info{
	public:
		int id;
};

class Emp: public Info
{
	public:
		void show()
		{
			cout<<id;
		}
};

class Stu: public Info
{
	public:
		void show()
		{
			cout<<id;
		}
};

main(){
	Emp e;
	e.id = 5;
	e.show();
	Stu s;
	s.id = 6;
	s.show();
}


