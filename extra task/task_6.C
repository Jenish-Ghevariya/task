#include<stdio.h>

main()
{
	int  i,j,r,c;
     printf("enter the size rows:");
	scanf("%d",&r);
	printf("enter the size columns:");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
		{
    		  
		     scanf("%d",&a[i][j]);
		}
	}
     for(i=0;i<r;i++)
	{
	   for(j=0;j<c;j++)
		{
			if(i==0 && j==0 || i==0 && j==2 || i==1 && j==1 || i==2 && j==0 || i==2 && j==2)
			 {
				printf("%d",a[i][j]);
			 }
			else
			 {
				printf("-");
			 }
	     }
		printf("\n");
	}
	
}
