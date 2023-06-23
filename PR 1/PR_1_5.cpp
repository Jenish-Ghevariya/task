#include<iostream>
using namespace std;

class bike{
	public:
	int sit;
	int horn;
	private:
	int garenty;
};
int main()
{
	bike b1;
    b1.sit=5;
    b1.horn=2;

	cout<<"bike sit is:"<<b1.sit<<endl;
	cout<<"bike horn is:"<<b1.horn<<endl;
	
	return 0;
}

