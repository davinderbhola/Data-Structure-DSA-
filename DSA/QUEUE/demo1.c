#include<stdio.h>
#include <stdlib.h>
int size = 3;
int n,front=-1,rear=-1;
int queue[];

void insert()
{
    int item;
    printf("Rear %d ",rear);
    printf("N %d\n",size);

    if(rear==size)
    {
        printf("\toverflow\n");
        return;
    }
    else if(rear==-1)
    {
        front=rear=0;
    }
    else
    {
        rear=rear+1;
    }
        printf("enter the item : ");
        scanf("%d",&item);


        queue[rear]=item;
    
}
void delet()
{
    if(front==-1)
    {
        printf("\tunderflow\n");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
    
        front = front + 1;
    }
    
}

void show()
{
    printf("Queue is\n");
    int i;
    printf("front\trear\tQueue\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d\t%d\t%d\n",front,rear,queue[i]);
        // printf("%d\t",queue[i]);
    }
}
int main()
{
    printf("The size of queue is %d\n",size);
    queue[size];
    int choice;
    while(1)
    {
 
    printf("\n1.Insertion\n2.Deletion\n3.Show\n4.End");  
    printf("\n\nEnter the choice: ");
    scanf("%d",&choice);
    switch (choice)  
        {  
        case 1:  
            insert();  
        break; 
        case 2:
            delet();
        break; 
        case 3:  
            show();  
        break;  
        case 4:  
            exit(0);  
        default:  
            printf("\nInvalid choice!!");  
        }
    }
}