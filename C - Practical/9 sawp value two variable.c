#include<stdio.h>
#include<conio.h>
//swap two veriable value

void main(){
	int a,b,c;
	
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	c=a+b;
	a=c-a;
	b=c-b;
	
	printf("a=%d\n",a);

	printf("b=%d\n",b);
}
