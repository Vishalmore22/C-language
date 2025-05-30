#include<stdio.h>
#include<conio.h>
//wap to print 1 to n using while loop
void main()
{
	int n,i=1;
	printf("Enter num:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
