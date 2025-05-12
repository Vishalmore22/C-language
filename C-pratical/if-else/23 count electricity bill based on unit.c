#include<stdio.h>
#include<conio.h>
//wap to count electricity bill based on unit
void main ()
{
	float unit,bill;
	
	printf("Enter eletricity unit :");
	scanf("%f",&unit);
	
	if(unit<=20)
	{
		bill = (20*0.5);
		printf("this your bill amount %f",bill);
	}
	else if(unit<=40)
	{
		bill = (20*0.5)+(unit-20)*1;
		printf("this your bill amount %f",bill);
	}
	else if(unit<=60)
	{
		bill = (20*0.5)+(20*1)+(unit-40)*1.5;
		printf("this your bill amount %f",bill);
	}
	else if(unit<=100)
	{
 		bill = (20*0.5)+(20*1)+(20*1.5)+(unit-60)*2;
 		printf("this your bill amount %f",bill);
	}
	else
	{
		bill = (20*0.5)+(20*1)+(20*1.5)+(40*2)+(unit-100)*5;
 		printf("this your bill amount %f",bill); 
	} 
	
}
	
