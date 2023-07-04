#include <iostream>
using namespace std;

class Train 
{
    public:
    int Number;
    char Name[100];
    char source[100];
    char destination[100];
    char Time[100];

};
int main()
{
	Train t[3];
	int i;
	for(i=0;i<=2;i++)
	 {
	 	cout<<"enter train number:";
	 	cin>>t[i].number;
	 	cout<<"enter train name:";
	 	cin>>t[i].name;
	 	cout<<"enter source name:";
	 	cin>>t[i].source;
	 	cout<<"enter destination name:";
	 	cin>>t[i].destination;
	 	cout<<"enter train name:";
	 	cin>>t[i].time;
	 	
	 }
	 
	 int n;
	 cout<<"enter train number..";
	 cin>>n;
	 
	 if(a==t[1].name)
	 {
	 	cout<<"train number =>"<<t[1].number<<endl;
	 	cout<<"train name =>"<<t[1].name<<endl;
 		cout<<"train source =>"<<t[1].source<<endl;
		cout<<"train destination =>"<<t[1].destination<<endl;
	 	cout<<"train time =>"<<t[1].time<<endl;
	 }
	 else if(a==t[2].name)
	 {
	  	cout<<"train number =>"<<t[2].number<<endl;
	 	cout<<"train name =>"<<t[2].name<<endl;
 		cout<<"train source =>"<<t[2].source<<endl;
		cout<<"train destination =>"<<t[2].destination<<endl;
	 	cout<<"train time =>"<<t[2].time<<endl;
	 }
	 else
	 {
		cout<<"train number =>"<<t[3].number<<endl;
	 	cout<<"train name =>"<<t[3].name<<endl;
 		cout<<"train source =>"<<t[3].source<<endl;
		cout<<"train destination =>"<<t[3].destination<<endl;
	 	cout<<"train time =>"<<t[3].time<<endl;
    }
}
