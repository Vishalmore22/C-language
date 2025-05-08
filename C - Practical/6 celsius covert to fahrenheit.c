#include<stdio.h>
#include<conio.h>
//celsius covert to fahrenheit
void main(){
	int celsius;// we asing celsius
	
	 
	printf("Enter tempreture in celsius : ");//then send request to user for enter no 
	scanf("%d",&celsius);// in this line user can input the number
	
	float f;//we asing fahrenheit variable
	f = (celsius * 9/5) + 32;//this the formula of find fahrenheit
	
	printf("fahrenheit :%.1f",f );//then we give final output of calcucation
	
}
