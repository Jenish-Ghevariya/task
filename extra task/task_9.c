/*
      *       * * * * *
      *       *
      *   *   *   *
      *       *
      * * * * * * * * *
              *       *
          *   *   *   *
              *       *
      * * * * *       *
*/
#include<stdio.h>
main()
{
	int i;
	for(i=0;i<=9;i++)
	{
		if(i==1)
		{
			printf(" *       * * * * *");
		}
		if(i==2 || i==4)
		{
			printf(" *       *");
		}
		if(i==3)
		{
			printf(" *   *   *   *");
		}
		if(i==5)
		{
			printf(" * * * * * * * * *");
		}
		if(i==6 || i==8)
		{
			printf("         *       *");
		}
		if(i==7)
		{
			printf("     *   *   *   *");
		}
		if(i==9)
		{
			printf(" * * * * *       *");
		}
		printf("\n");
	}
	
}
