// insert at end
// create doubble linked list
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
        printf("overflow\n");
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
// insert at end

void insert(struct Node *ptr)
{
    struct Node *new;
    struct Node *save;
    int item;
    new=(struct Node*)malloc(sizeof(struct Node));

    if(ptr==NULL)
    {
        printf("overflow condition");
    }
    else
    {
        printf("enter the item : ");
        scanf("%d",&item);
        save=ptr;
        ptr=ptr->forw;
        // ptr->back=save;
        while(ptr!=NULL)
        {
            save=ptr;
            ptr=ptr->forw;
            // ptr->back=save;
        }
        new->info=item;
        save->forw=new;
        new->back=save;
        new->forw=NULL;
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
    printf("after insertion\n");
    display(head);

}