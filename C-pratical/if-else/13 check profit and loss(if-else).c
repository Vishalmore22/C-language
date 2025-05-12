#include<stdio.h>
#include<conio.h>
//check profit and loss
void main(){
	int investment;
	int income;
	
	printf("Enter your investment :");
	scanf("%d",&investment);
	printf("Enter your income :");
	scanf("%d",&income);
	
	if(investment<income)
	{
 		printf("you are in profit !");
    }	 
	else if(investment>=income)
	{
		printf("you are are in loss");
    } 
	
}
