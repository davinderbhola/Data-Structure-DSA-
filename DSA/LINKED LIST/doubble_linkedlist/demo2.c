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
// searching

void search(struct Node *ptr)
{
    int item,status=0;
    printf("enter the item to be search : ");
    scanf("%d",&item);

    while(ptr!=NULL)
    {
        if(item==ptr->info)
        {
            printf("item to be search %d ",ptr);
            status=1;
            break;
        }
        else{
            ptr=ptr->forw;
        }
    }
    if(ptr=NULL)
        printf("item not found\n");

}
int main()
{
    struct Node *head,*prev=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head,prev);
    printf("Linked list is as follows\n");
    display(head);
    search(head);
}