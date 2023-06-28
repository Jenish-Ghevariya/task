#include<iostream>
using namespace std;
class car{
	public:
	int id;
	char company_name[100];
	char color[100];
	char model[100];
	int release_year;
};
int main()
{
	car s[100];
	int i,n;
    printf("Enter no. of class :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	cout<<"Enter your id :"; 
		cin>>s[i].id;
    	cout<<"Enter your company_name : "; 
		fflush(stdin);
		cin>>s[i].company_name;
    	cout<<"Enter your color : ";
		fflush(stdin);
		cin>>s[i].color;
		cout<<"Enter your model : "; 
		fflush(stdin);
		cin>>s[i].model;
    	cout<<"Enter your  release_year : "; 
		cin>>s[i].release_year;
	}
	
	printf("\n\n-----------------------------\n\n");
	
	for(i=0;i<n;i++)
		{
			cout<<"Enter id:"<<s[i].id<<endl;
			cout<<"Enter company_name:"<<s[i].company_name<<endl;
			cout<<"Enter color:"<<s[i].color<<endl;
			cout<<"Enter model:"<<s[i].model<<endl;
			cout<<"Enter release_year:"<<s[i].release_year<<endl;
		}
}
