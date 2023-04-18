/*         1
         2 1 2
	   3 2 1 2 3
	 4 3 2 1 2 3 4 
   5 4 3 2 1 2 3 4 5 
     4 3 2 1 2 3 4 
	   3 2 1 2 3 
    	 2 1 2
		   1
		   1
		 2 1 2
	   3 2 1 2 3         
*/
#include<stdio.h>
main()
{
    int i,j,s;
    for(i=1;i<=5;i++)
    {
	   for(s=1;s<=5-i;s++)
	   {
	     printf("  ");
	   }
	   for(j=i;j>=1;j--)
	   {
	     printf("%d ",j);
	   }
	   for(j=2;j<=i;j++)
	   {
	   	printf("%d ",j);
		}
      printf("\n");
    }
   for(i=4;i>=1;i--)
    {
    	for(s=1;s<=5-i;s++)
    	{
    		printf("  ");
	   }
    	for(j=i;j>=1;j--)
    	{
	     printf("%d ",j);
	   }
	   for(j=2;j<=i;j++)
	   {
	   	printf("%d ",j);
		}
      printf("\n");
   }
    for(i=1;i<=3;i++)
    {
    	for(s=1;s<=5-i;s++)
    	{
    		printf("  ");
	    }
    	for(j=i;j>=1;j--)
    	{
	     printf("%d ",j);
	    }
	   for(j=2;j<=i;j++)
	    {
	   	printf("%d ",j);
		}
      printf("\n");
   }
}


