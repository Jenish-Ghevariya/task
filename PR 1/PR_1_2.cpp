#include<iostream>
using namespace std;
class d_mart{
	public:
	int save;
	int pasta;
	int locho;
	int bhajiya;
};
int main()
{
	d_mart s[2];
	int i;
	for(i=0;i<2;i++)
	{
		cout<<"enter save : ";
		cin>>s[i].save;
		cout<<"enter pasta : ";
		cin>>s[i].pasta;
		cout<<"enter locho : ";
		cin>>s[i].locho;
		cout<<"enter bhajiya : ";
		cin>>s[i].bhajiya;
	}
	
	cout<<"\n-----------------------\n";
	
	for(i=0;i<2;i++)
	{
		cout<<"enter save: "<<s[i].save<<endl;
		cout<<"enter pasta : "<<s[i].pasta<<endl;
		cout<<"enter locho : "<<s[i].locho<<endl;
		cout<<"enter bhajiya : "<<s[i].bhajiya<<endl;
	}
	return 0;
}
