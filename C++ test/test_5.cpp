#include<iostream>
using namespace std;
class A
{
	public:
	void name()
	{
	   cout<<"enter the name.."<<endl;
	}	
};
class B:public A
{
	public:
	void name1()
	{
		cout<<"enter the name1.."<<endl;
	}
};
class C:public A
{
	public:
	void name2()
	{
		cout<<"enter the name2.."<<endl;
	}
};
class D:public C,public B
{
	public:
	void name3()
	{
		cout<<"enter the name3.."<<endl;
	}
};
int main()
{
	D d;
	d.B::name();
	d.name1();
	d.name2();
	d.name3();
	return 0;
}
