#include<iostream>
using namespace std;
class factorial
{
	public:
		int a,b,i;
		void setdata()
		{
			cout<<"enter the number:";
	        cin>>a;
		}
		
		void getdata()
		{
			for(i=0;i<=10;i++)
			{
				if(a>0)
				{
					cout<<a<<"*";
					a--;
				}
				else
				{
					break;
				}
			}
		}
};
int main()
{
	factorial f;
	f.setdata();
	cout<<"factorial series:";
	f.getdata();
	return 0;
}
