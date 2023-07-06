#include<iostream>
using namespace std;
class mother
{
	public:
	int age;
	char name[100];
};
class zebra:public mother
{
	public:
		void setdata()
		{
			cout<<"enter the age:";
			cin>>mother::age;
			cout<<"enter the name:";
			cin>>mother::name;
		}
		void getdata()
	   {
	 	   cout<<"I am zebra..\n";
	 	   cout<<"my age is:"<<age<<endl;
	 	   cout<<"my name is:n"<<name<<endl;
	   } 
};
class dolphin:public mother
{
	public:
		void setdata()
		{
			cout<<"enter the age :";
			cin>>mother::age;
			cout<<"enter the name:";
			cin>>mother::name;
		}
		void getdata()
	   {
	 	   cout<<"I am dolphin...\n";
	 	   cout<<"my age is:"<<age<<endl;
	 	   cout<<"my name is:"<<name<<endl;
	   } 
};
int main()
{
	zebra z1;
	dolphin d1;
	z1.setdata();
	z1.getdata();
	d1.setdata();
	d1.getdata();
	return 0;
}
