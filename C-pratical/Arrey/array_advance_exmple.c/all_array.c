#include<stdio.h>
// Write a C program to Insert, Delete, and update operations of the element into the array
void main()
{
    int i,size,choice,pos,value;
    printf("Enter array size : ");
    scanf("%d",&size);
    int a[size];
    for(i=0; i<size; i++)
    {
        printf("a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    do {
        printf("\noption:\n ");
        printf("1. Insert:\n ");
        printf("2. Delete:\n ");
        printf("3. Update:\n ");
        printf("4. Display:\n ");
        printf("5. Exit\n ");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
        case 1:
            printf("Enter position to insert value(0 to %d): ",size);
            scanf("%d",&pos);
            printf("Enter value to insert: ");
            scanf("%d",&value);
            if(pos>=0 && pos<=size)
            {
                size++;
                for(i=size; i>pos; i--)
                {
                    a[i]=a[i-1];
                }
                a[pos]=value;


                printf("Insert successfully!\n");
            }
            else
            {
                printf("Invalid position!\n");
            }
            break;
        case 2:
            printf("Enter position to delete value(0 to %d)",size-1);
            scanf("%d",&pos);
            if(pos>=0 && pos<size)
            {
                size--;
                for(i=pos; i<size; i++)
                {
                    a[i]=a[i+1];

                }


                printf("Delete successfully! \n");
            }
            else
            {
                printf("Invalid position!\n");
            }
            break;
        case 3:
            printf("Enter position to update value (0 to %d)",size-1);
            scanf("%d",&pos);
            printf("Enter updated value: ");
            scanf("%d",&value);
            if(pos>=0 && pos<size)
            {
                a[pos]=value;

                printf("Updated successfully!\n");
            }
            else
            {
                printf("Invalid position!\n");
            }
            break;
        case 4:
            printf("array elements: ");
            for(i=0; i<size; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");
            break;
        case 5:
            printf("Exiting...!\n");
            break;

        default:
            printf("Invalid choice! \n");

        }

    }
    while(choice!=5);

}