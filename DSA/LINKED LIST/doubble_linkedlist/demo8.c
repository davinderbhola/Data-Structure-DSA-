// deletio at loc

#include<stdio.h>
#include<process.h>

struct Node
{
    int info;
    struct node *forw;
    struct node *back;

}; 


void create(struct Node *list,struct Node *prev)
{
    char ans;
    
    printf("Do you want more nodes ");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans=='n')
    {
        list->forw=NULL;
        prev->forw=NULL;
    }
    else
    {
        printf("enter info value ");
        scanf("%d",&list->info);
        
        list->back=prev;
        list->forw=(struct Node*)malloc(sizeof(struct Node));
        prev=list;
        create(list->forw,prev);
    }
}
// traversing

void display(struct Node *ptr)
{
    printf("Address\t\tBack\t\tInfo\t\tForw\n");
    while(ptr!=NULL)
    {
        printf("%d\t\t%d\t%d\t%d\n",ptr,ptr->back,ptr->info,ptr->forw);
        ptr=ptr->forw;
    }
}
// deletion

void delet(struct Node *ptr)
{
    int item;
    struct Node *loc;
    struct Node *befor;
    struct Node *after;
    if(ptr==NULL)
    {
        printf("underflow condition : ");
    }
    else
    {
        printf("enter the loc : ");
        scanf("%d",&loc);
        
        befor=loc->back;
        after=loc->forw;
        befor->forw=after;
        after->back=befor;
        free(loc);

    }
}
int main()
{
    struct Node *head,*prev=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head,prev);
    printf("Linked list is as follows\n");
    display(head);
    
    printf("\nafter deletion\n");
    delet(head);
 
    printf("Linked list is as follows\n");
    display(head);

}