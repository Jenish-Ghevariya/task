#include<iostream>
using namespace std;
class A
{
	public:
	int a;
	   void funA()
		{
			cout<<"enter the a:"<<endl;
			cin>>a;
		}
};
class B:public A
{
	public:
	int b;
	   void funB()
		{
			cout<<"enter the b:"<<endl;
			cin>>b;
		}
};
class C:public A
{
	public:
	int c;
	   void funC()
		{
			cout<<"enter the c:"<<endl;
			cin>>c;
		}
};
class D:public B,public C
{
	public:
	int d;
	   void funD()
		{
			d=B::a+b+c;
			cout<<"sum :"<<d<<endl;
		}
};
int main()
{
	D d1;
	d1.B::funA();
	d1.funB();
	d1.funC();
	d1.funD();
	return 0;
}
