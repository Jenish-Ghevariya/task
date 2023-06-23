#include<iostream>
using namespace std;
class time{
	public:
	int sec;
};
int main()
{
	int j1,j2,g1,g2;
	time t1;
	cout<<"enter second : ";
	cin>>t1.sec;
	j1=t1.sec/3600;
	j2=t1.sec%3600;
	g1=j2/60;
	g2=j2%60;
	
	cout<<"time is : "<<j1<<":"<<g1<<":"<<g2;
    return 0;
 	
}
