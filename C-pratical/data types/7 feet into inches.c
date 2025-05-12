#include<stdio.h>
#include<conio.h>
//feet into inches 
void main(){
	int feet;// create feet variable 
	float inches;//create inches variable 
	printf("Enter feet no: ");//send request to user enter feet
	scanf("%d",&feet);// now user enter the number 
	inches = feet*12;//the formula of inches
	printf("inches :%.1f",inches );//final output 
}
