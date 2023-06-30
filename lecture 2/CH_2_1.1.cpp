#include<iostream>
using namespace std;
class students{
	private:
	int id;
	char name[100];
	int age;
	char course[100];
	char email[100];
	char city[100];
	char college[100];
	
	public:
	void setdata(){
		cout<<"enter the id:";
		cin>>id;
		cout<<"enter your name:";
		cin>>name;
		cout<<"enter the age:";
		cin>>age;
		cout<<"enter the course:";
		cin>>course;
		cout<<"enter the email:";
		cin>>email;
		cout<<"enter the city:";
		cin>>city;
		cout<<"enter the college:";
		cin>>college;
	}
	void getdata(){
	 	cout<<"id:"<<id<<endl;
	 	cout<<"name:"<<name<<endl;
	    cout<<"age:"<<age<<endl;
	 	cout<<"course:"<<course<<endl;
	 	cout<<"email:"<<email<<endl;
	 	cout<<"city:"<<city<<endl;
	 	cout<<"college:"<<college<<endl;
	 }
};
int main()
{
	students s1,s2,s3,s4,s5;
	s1.setdata();
	s2.setdata();
	s3.setdata();
	s4.setdata();
	s5.setdata();
	
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s4.getdata();
	s5.getdata();
  return 0;	
}
