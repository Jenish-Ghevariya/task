#include<iostream>
using namespace std;
class bank
{
	public:
	int number;
	string name;
	string type;
	string branch;
	int balance;
	
	void setdata()
	{
		cout<<"enter the number:";
		cin>>number;
		cout<<"enter the name:";
		cin>>name;
		cout<<"enter the type:";
		cin>>type;
		cout<<"enter the branch:";
		cin>>branch;
		cout<<"enter the balance:";
		cin>>balance;
	}
	
	void getdata()
	{
		cout<<"number:"<<number<<endl;
		cout<<"name:"<<name<<endl;
		cout<<"type:"<<type<<endl;
		cout<<"branch:"<<branch<<endl;
		cout<<"balance:"<<balance<<endl;
	}
	
};
int  main()
{
	int i,n;
	int A;
	cout<<"enter the ac numeber:";
	cin>>n;
	bank b[n];
	for(i=0;i<n;i++)
	{
		b[i].setdata();
	}
	cout<<"\n\n---------------------\n\n";
	cout<<"enter the ac numeber:";
	cin>>A;
	for(i=0;i<n;i++)
	{
		if(b[i].number==A)
		{
			b[i].getdata();
		}
	}
	
	return 0;
}
