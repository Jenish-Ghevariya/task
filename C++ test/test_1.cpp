#include <iostream>  
using namespace std;  
int main()  
{  
   int i,n,fact=1;    
   cout<<"Enter any Number: ";    
   cin>>n;    
   for(i=1;i<=n;i++)
   {    
   		for(i=1;i<=n;i++)
   		{
   			fact=fact*i;  
   			cout<<"Factorial of "<<n<<" is "<<fact<<endl; 
	    }  
	    n--;
   }      
   return 0;  
}  
