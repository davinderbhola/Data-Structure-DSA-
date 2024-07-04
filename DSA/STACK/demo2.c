// create stack Linked list

#include<stdio.h>
#include<process.h>

struct Node
{
    int info;
    struct node *link;
}; 

struct Node *s;


struct Node* push(struct Node *ps)
{
    int item;
    printf("enter the item : ");
    scanf("%d",&item);
    
    s=(struct Node*)malloc(sizeof(struct Node));
    s->info=item;
    s->link=ps;
    return s;

}
void pop(struct Node *list)
{
    int item;
    if(list==NULL)
    {
        printf("underflow ");
    }
    else
    {
        struct Node *temp = s;
        s = (s)->link;
        free(s);
    }
}
void show(struct Node *list)
{
    printf("\npevaddress\tinfo\taddress");
    while(list!=NULL)
    {
        printf("\n%d\t\t%d\t%d",list->link,list->info,list);
        list=list->link;
    }
}


int main()
{
    //struct node *s;
    
    int choice;
    printf("enter your choice : ");
    while(1)
    {
        printf("\nPerform operations on the stack:");  
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");  
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice); 
        switch (choice)  
        {  
        case 1:  
            s=push(s);  
            break;  
        case 2:  
            pop(s);  
            break;  
        case 3:  
            show(s);  
            break;  
        case 4:  
            exit(0);  
        default:  
            printf("Invalid choice");  
        } 
    }
    
}
