#include<stdio.h>
#include<conio.h>
//1 to n odd number
void main()
{
	int n;
	
	printf("Enter a number :");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
		if(i%2==1)
			printf("%d ",i);
			i++;	
	}
}
