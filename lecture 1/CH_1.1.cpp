#include<iostream>
using namespace std;
class employee{
	public:
	int id;
	char name[100];
	int age;
	int salary;
	char role[100];
	char city[100];
	int experience;
	char company_name[100]; 
};
int main()
{
	employee s[100];
	int i,n;
    printf("Enter no. of class :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	cout<<"Enter your id :"; 
		cin>>s[i].id;
    	cout<<"Enter your name : "; 
		fflush(stdin);
		cin>>s[i].name;
    	cout<<"Enter your age : "; 
		cin>>s[i].age;
		cout<<"Enter your salary : "; 
		cin>>s[i].salary;
    	cout<<"Enter your role : "; 
		fflush(stdin);
		cin>>s[i].role;
        cout<<"Enter your city : "; 
		fflush(stdin);
		cin>>s[i].city;
    	cout<<"Enter your experinece : "; 
		cin>>s[i].experience;
    	cout<<"Enter your company_name : "; 
		fflush(stdin);
		cin>>s[i].company_name;
	}
	
	printf("\n\n-----------------------------\n\n");
	for(i=0;i<n;i++)
		{
			cout<<"Enter id:"<<s[i].id<<endl;
			cout<<"Enter name:"<<s[i].name<<endl;
			cout<<"Enter age:"<<s[i].age<<endl;
			cout<<"Enter salary:"<<s[i].salary<<endl;
			cout<<"Enter role:"<<s[i].role<<endl;
			cout<<"Enter city:"<<s[i].city<<endl;
			cout<<"Enter experience:"<<s[i].experience<<endl;
			cout<<"Enter company_name:"<<s[i].company_name<<endl;
		}
}
