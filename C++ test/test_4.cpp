#include<iostream>
using namespace std;
class A
{
	public:
	int a;
};
class B:public A
{
	public:
		int b;
};
class C:public B
{
	public:
		int c;
		int d;
		void setdata()
		{
			cout<<"enter a:";
			cin>>a;
			cout<<"enter b:";
			cin>>b;
			cout<<"enter c:";
			cin>>c;
		}
		
		void getdata()
		{
			d=a*b*c;
			cout<<"multiplication :"<<d<<endl;
		}
};
int main()
{
	C c;
	c.setdata();
	c.getdata();
	return 0;
}
