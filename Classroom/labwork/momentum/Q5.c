/*Write a C program to input marks of five subjects: Physics, Chemistry, Biology, Mathematics and Computer. 
    Calculate the percentage and grade according to the following
        Percentage >= 90% : Grade A
        Percentage >= 80% : Grade B
        Percentage >= 70% : Grade C
        Percentage >= 60% : Grade D 
        Percentage >= 50% : Grade E
        Percentage >= 40% : Grade F*/
       
#include<stdio.h>
#include<conio.h>	    
void main()
{
	int a,b,c,d,e,pr;
	printf("enter physics sub marks:");
	scanf("%d",&a);
	printf("enter chemistry sub marks:");
	scanf("%d",&b);
	printf("enter biology sub marks:");
	scanf("%d",&c);
	printf("enter mathematics sub marks:");
	scanf("%d",&d);
	printf("enter computer sub marks:");
	scanf("%d",&e);
	
	pr=(a+b+c+d+e)/5;
	printf("percentage is %d\n",pr);
	
	if(pr>=90&&pr<=100)
	printf("grade A");
	else if(pr>=80&&pr<90)
	printf("grade B");
	else if(pr>=70&&pr<80)
	printf("grade C");
	else if(pr>=60&&pr<70)
	printf("grade D");
	else if(pr>=50&&pr<60)
	printf("grade E");
	else if(pr>=40&&pr<50)
	printf("grade F");
	else
	printf("fail");	
	
	
}        