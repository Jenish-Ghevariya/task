#include<iostream>
using namespace std;
class A
{
	public:
	int id;
	char name[100];
	char role[100];
	int salary;
	int experience;
	char company_name[100];
	char address[100];
	char email[100];
	char number[10];
	void setdataA()
	{
		cout<<"enter the id:";
		cin>>id;
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the role:";
		cin>>role;
	}
};
class B:public A
{
	public:
	void setdataB()
	{
		cout<<"enter the salary:";
		cin>>salary;
		cout<<"enter the experience:";
		cin>>experience;
	}
};
class C:public B
{
	public:
	void setdataC()
	{
		cout<<"enter the company_name:";
		cin>>company_name;
		cout<<"enter the address:";
		cin>>address;
	}
};
class D:public C
{
	public:
	void setdataD()
	{
		cout<<"enter the id:";
		cin>>id;
		cout<<"enter the number:";
		cin>>number;
	}
	void getdataD()
	{
		cout<<"id:"<<id<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"role:"<<role<<endl;
		cout<<"salary:"<<salary<<endl;
		cout<<"experience:"<<experience<<endl;
		cout<<"company_name:"<<company_name<<endl;
		cout<<"address:"<<address<<endl;
		cout<<"number:"<<number<<endl;
	}
};
int main()
{
	D d1;
	d1.setdataA();
	d1.setdataB();
	d1.setdataC();
	d1.setdataD();
	d1.getdataD();
	return 0;
}
