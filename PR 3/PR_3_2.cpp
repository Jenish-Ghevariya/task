#include<iostream>
using namespace std;
class mother
{
	public:
	void functionM()
	{
		cout<<"hello i am mother.."<<endl;
	}
};
class daugther:public mother
{
	public:
	void fuctionD()
	{
		cout<<"hello i am daugther.."<<endl;
	}
};
int main()
{
	daugther d1;
	d1.functionM();
	d1.fuctionD();n
	return 0;
}
