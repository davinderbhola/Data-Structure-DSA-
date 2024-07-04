// insertion after loc in double linked list

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
        printf("%d\t%d\t%d\t%d\n",ptr,ptr->back,ptr->info,ptr->forw);
        ptr=ptr->forw;
    }
}
// insertion after loc

void insert(struct Node *ptr)
{
    struct Node *loc;
    struct Node *new;
    int item;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL)
    {
        printf("overflow condition");
    }
    else
    {
        printf("enter the fore of loc : ");
        scanf("%d",&loc);
        printf("enter the item : ");
        scanf("%d",&item);
        new->info=item;
        new->forw=loc->forw;
        new->back=loc;
        loc->forw=new;
    }
}

int main()
{
    struct Node *head,*prev=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head,prev);
    printf("Linked list is as follows\n");
    display(head);

    insert(head);
    printf("after insertion :\n");
    display(head);

}