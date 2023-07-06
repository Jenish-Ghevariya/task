#include<iostream>
using namespace std;
class variable
{
	public:
	int height;
	int width;
};
class rectangle:public variable
{
	public:
	int R;
	void setdata()
	{
	    cout<<"enter height of rectangle:";	
	    cin>>height;
	    cout<<"enter width of rectangle:";	
	    cin>>width;
	}
	void getdata()
	{
		R=height*width;
		cout<<"area of rectangle.."<<R<<endl;
	}
};
class triangle:public variable
{
	public:
	int T;
	void setdata()
	{
	    cout<<"enter height of triangle:";	
	    cin>>height;
	    cout<<"enter width of triangle:";	
	    cin>>width;
	}
	void getdata()
	{
		T=0.5*height*width;
		cout<<"area of traiangle.."<<T<<endl;
	}
};
int main()
{
	rectangle r1;
	triangle t1;
	r1.setdata();
	r1.getdata();
	t1.setdata();
	t1.getdata();
	return 0;
}
