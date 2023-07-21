#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the a:";
	cin>>a;
	cout<<"enter the b:";
	cin>>b;
	try{
		if(b==0)
		{
			throw 0;
		}
		else
		{
			c=a/b;
			cout<<"answer is:"<<c<<endl;
		}
	}
	catch(int x)
	{
		cout<<"tarathi no thai bhai..";
	}
	return 0;
}
