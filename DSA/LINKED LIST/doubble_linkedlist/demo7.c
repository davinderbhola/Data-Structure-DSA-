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

void deleteAtLoc(struct Node *ptr)
{
    int item;
    struct Node *save,*next;
    printf("Enter the item ");
    scanf("%d",&item);
    
    while(ptr->info!=item)
    {
        save=ptr;
        ptr=ptr->forw;
    }
    next=ptr->forw;
    save->forw=ptr->forw;
    next->back=save;
    free(ptr);
}
int main()
{
    struct Node *head,*prev=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head,prev);
    printf("Linked list is as follows\n");
    display(head);

    deleteAtLoc(head);

    printf("Linked list is as follows\n");
    display(head);

}