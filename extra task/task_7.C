/*         J
         J J J
       J J J J J
     J J J J J J J
   J J J J J J J J J
   J J J       J J J
   J J J       J J J
   J J J       J J J
*/
#include<stdio.h>
main()
{
	int i,j;
	for(i=0;i<=8;i++)
	{
      if(i==8 || i==7 || i==6)
	  {
	 	 printf("   J J J       J J J");
	  }
	  if(i==5)
	  {
	  	printf("   J J J J J J J J J");
	  }
	  if(i==4)
	  {
	  	printf("     J J J J J J J");
	  }
	   if(i==3)
	  {
	  	printf("       J J J J J");
	  }
	   if(i==2)
	   {
	  	printf("         J J J");
	   } 
	    if(i==1)
	   {
	  	printf("           J");
	   }
	 printf("\n");	
	}
	
}

