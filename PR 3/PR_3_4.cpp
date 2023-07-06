#include<iostream>
using namespace std;
class employee1{
	public:
		int id=1;
		char name[100]="jenish";
		int salary=100000;
		void fuction1()
		{
			cout<<"name:"<<name<<endl;
			cout<<"id:"<<id<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};
class employee2{
	public:
		int id=2;
		char name[100]="sahil";
		int salary=50000;
		void fuction2()
		{
			cout<<"name:"<<name<<endl;
			cout<<"id:"<<id<<endl;
			cout<<"salary:"<<salary<<endl;
		}
};
class manager:public employee1,public employee2
{
	public:
};
int main()
{
	manager m1;
	m1.fuction1();
	cout<<"----------------------------------"<<endl;
	m1.fuction2();
	return 0;
}
