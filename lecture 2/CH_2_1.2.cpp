#include<iostream>
using namespace std;
class Customers{
	private:
	int id;
	char name[100];
	int age;
	char telecome_brand_name[100];
	char mobile_number[100];
	char city[100];
	int simcard_validity;
	
	public:
	void setdata(){
		cout<<"enter the id:";
		cin>>id;
		cout<<"enter your name:";
		cin>>name;
		cout<<"enter the age:";
		cin>>age;
		cout<<"enter the telecome_brand_name :";
		cin>>telecome_brand_name;
		cout<<"enter the mobile_number :";
		cin>>mobile_number;
		cout<<"enter the city:";
		cin>>city;
		cout<<"enter the simcard_validity:";
		cin>>simcard_validity;
	}
	void getdata(){
	 	cout<<"id:"<<id<<endl;
	 	cout<<"name:"<<name<<endl;
	    cout<<"age:"<<age<<endl;
	 	cout<<"telecome_brand_name:"<<telecome_brand_name<<endl;
	 	cout<<" mobile_number :"<< mobile_number <<endl;
	 	cout<<"city:"<<city<<endl;
	 	cout<<" simcard_validity:"<< simcard_validity<<"years"<<endl;
	 }
};
int main()
{
	Customers c1,c2,c3,c4,c5;
	c1.setdata();
	c2.setdata();
	c3.setdata();
	c4.setdata();
	c5.setdata();
	
		
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	
	return 0;	
}
