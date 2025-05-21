#include<stdio.h>
#include<conio.h>
//WAP to find a the answer given formula (x-y-z)3
void main()
{
	int x=5,y=6,z=2;
	
	printf("(x-y-z)3=%d ",(x*x*x)-(y*y*y)-(z*z*z)-3*(x*x)*y-3*(x*x)*z+3*x*(y*y)+3*x*(z*z)-3*(y*y)*z-3*y*(z*z)+6*x*y*z);
}
