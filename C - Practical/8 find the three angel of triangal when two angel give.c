#include<stdio.h>
#include<conio.h>
//find the three angel of triangal when two angel give  
void main(){
	int a;
	int b;
	int c;
	
	printf("Enter You a:");
	scanf("%d",&a);
	printf("Enter You b:");
	scanf("%d",&b);
	

	c= 180 - (a+b);
	
	printf("This You ans:%d",c);

}
