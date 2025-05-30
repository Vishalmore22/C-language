#include<stdio.h>
#include<conio.h>

void main()
{
	int start,end;
	
	printf("Enter start year:");
	scanf("%d",&start);
	printf("Enter end year:");
	scanf("%d",&end);
	//s-2000,e-2010
	while(start<=end)//s-2000,s-2001,s-2002,s-2003,s-2004,s-2005,s-2006
	{
		if(start%4==0)//s-2000,2004
		{
			printf("%d ",start);//		
		}
		start++;//2001,2002,2003,2004,2005,2006
	}
}
