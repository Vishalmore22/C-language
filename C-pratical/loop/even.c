#include<stdio.h>
#include<conio.h>
//1 to n even number
void main()
{
	int n;//10
	printf("Enter n num :");
	scanf("%d",&n);
	
	int i=1;
	while(i<=n)//i=1,i=2,i=3.............i=10 candtion false
	{
		if(i%2==0)//i=1,i=2,i=3
		
			printf("%d ",i);
			i++;//1+1i=2,2+1i=3,3+1i=4...............i=10	
			
		
	}
}
