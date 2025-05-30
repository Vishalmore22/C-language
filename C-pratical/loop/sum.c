#include<stdio.h>
#include<conio.h>
// n=10   =1+2+3+4.......+10
void main()
{
	int i=1,n;
	printf("enter number :");
	scanf("%d",&n);
	int sum=0;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
