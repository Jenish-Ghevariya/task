#include<iostream>
using namespace std;
class sbi
{
	public:
	int interest=5;
	void fucS()
	{
		cout<<"sbi is :"<<interest<<endl;
	}
};
class bob
{
	public:
	int interest=10;
	void fucB()
	{
		cout<<"bob is :"<<interest<<endl;
	}
};
class Icici
{
	public:
	int interest=15;
	void fucI()
	{
		cout<<"icici is :"<<interest<<endl;
	}
};
class RBI:public sbi,public bob,public Icici
{



	

};
int main()
{
	RBI r1;
	r1.fucB();
	r1.fucI();
	r1.fucS();
	return 0;
}
