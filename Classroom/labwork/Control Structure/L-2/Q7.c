#include<stdio.h>
#include<conio.h>

int main()
{
 int a,b,c,d,e;
 printf("enter a:");
 scanf("%d",&a);
 printf("enter b:");
 scanf("%d",&b);
 printf("enter c:");
 scanf("%d",&c);
 printf("enter d:");
 scanf("%d",&d);
 printf("enter e:");
 scanf("%d",&e); 
 
 //a,b,c,d,e
 (a>b)?
 	//a,c,d,e
 	(a>c)?
 		//a,d,e
 		(a>d)?
 			//a,e
 			(a>e)?
 				printf("a is max")
				:printf("e is max")

		:(d>e)?
				printf("d is max")
               :printf("e is max")

    :(c>d)?
        (c>e)?
               	printf("c is max")
               :printf("e is max")

	   :(d>e)?

			   	printf("d is max")
		        :printf("e is max")

:(b>c)?
    (b>d)?
        (b>e)?
 				printf("b is max")
			   :printf("e is max")
	    :(d>e)?
		    	printf("d is max")
				:printf("e is max")

:(c>d)?
       (c>e)?
				printf("c is max")					
				:printf("e is max")
       :(d>e)?
				printf("d is max")
		    	:printf("e is max");
}
 
