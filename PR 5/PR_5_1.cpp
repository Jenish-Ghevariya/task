#include<iostream>
using namespace std;

class Garage{
	public:	
	Garage() 
	{	    
		cout<<"Your Error is Detected"<<endl<<endl;
	}
};

int main() 
{
	try 
	{
		Garage g;
	    throw 0;	
	}
 	catch (int n) 
	{
	   	cout<< "pela battery puray bhai...";
	}
	return 0;
}
