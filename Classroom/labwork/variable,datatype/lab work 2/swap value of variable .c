#include<stdio.h>
#include<conio.h>
//swap two veriable value
void main()
{
	int
	a=10,b=20;
	
	printf("a value is =10\n");
	printf("b value is =20\n");

	
	a=a*b;//10*20=200 a=200
	b=a/b;//200/20=10 b=10
	a=a/b;//200/10=20 a=20	
	
	
	printf("a = %d\n",a);
	printf("b = %d",b);
	
}

