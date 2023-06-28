#include<iostream>
using namespace std;
class hotel{
	public:
	int id;
	char name[100];
	char type[100];
	int rating;
	char city[100];
	static int year;
	int staff_quantity;
	int room_quantity;
};
	
int hotel::year=2003;
int main()
{
	int n;
	cout<<"enter number of hotel :"<<endl;
	cin>>n;
	 
    hotel h[n];
    int i;
    for(i=0;i<n;i++)
    {
    	cout<<" enter the id:";
    	cin>>h[i].id;
    	cout<<" enter your name:";
    	cin>>h[i].name;
    	cout<<" enter type:";
    	cin>>h[i].type;
    	cout<<" enter rating:";
    	cin>>h[i].rating;
    	cout<<" enter city:";
    	cin>>h[i].city;
    	cout<<" enter the year:";
    	cin>>h[i].year;
    	cout<<" enter the staff_quantity:";
    	cin>>h[i].staff_quantity;
    	cout<<" enter the room_quantity:";
    	cin>>h[i].room_quantity;
	}
	
	for(i=0;i<n;i++)
	{
		cout<<" hotel_id :"<<h[i].id<<endl;
		cout<<" hotel_name :"<<h[i].name<<endl;
		cout<<" hotel_type :"<<h[i].type<<endl;
		cout<<" hotel_rating :"<<h[i].rating<<"star"<<endl;
		cout<<" hotel_city :"<<h[i].city<<endl;
		cout<<" hotel_year :"<<h[i].year<<endl;
		cout<<" hotel_staff_quantity :"<<h[i].staff_quantity<<endl;
		cout<<" hotel_room_quantity :"<<h[i].room_quantity<<endl;
		
	}
    return 0;	
}
