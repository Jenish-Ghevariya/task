#include<iostream>
using namespace std;

class house{
	public:
	int rooms;
	int windows;
	int members;
};
class room{
	public:
	int mirror;
	int bag;
	int AC;
};
int main()
{
	house h1;
	h1.rooms=3;
	h1.windows=10;
	h1.members=9;
	
	room r1;
	r1.mirror=2;
	r1.bag=3;
	r1.AC=5;
	
	cout<<"house details:";
	cout<<h1.rooms<<endl;
	cout<<h1.windows<<endl;
	cout<<h1.members<<endl;
	
		
	cout<<"room details:";
	cout<<r1.mirror<<endl;
	cout<<r1.bag<<endl;
	cout<<r1.AC<<endl;
	
	return 0;
}

