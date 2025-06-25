//Write C program use switch statement. Display Monday to Sunday.
#include<stdio.h>
#include<conio.h>
void main()
{
	char day;
	printf("enter first digit of day:");
	scanf("%c",&day);
	
	switch(day){
		case 'm':
		case 'M':	
			printf("monday");
			break;
		case 'tu':
		case 'TU':	
		    printf("tuesday");
			break;
		case 'w':
		case 'W':	
		    printf("wednesday");
			break;
		case 'th':
		case 'TH':	
		    printf("thursday");
			break;
		case 'f':
		case 'F':	
		    printf("friday");
			break;
		case 'sa':
		case 'SA':	
		    printf("saturday");
			break;
		case 'su':
		case 'SU':	
		    printf("sunday");
			break;
		default: 
		    printf("enter valid character");							
	}
	
	
}