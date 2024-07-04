// create Linked list

#include<stdio.h>
#include<process.h>

struct Node
{
    int info;
    struct node *link;
}; 


void create(struct Node *list)
{
    char ans;
    printf("enter info value ");
    scanf("%d",&list->info);

    printf("Do you want more nodes ");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans=='n')
    {
        list->link=NULL;
    }
    else
    {
        list->link=(struct Node*)malloc(sizeof(struct Node));
        create(list->link);
    }
}
// traversing

void display(struct Node *ptr)
{
    printf("Info\t Address\n");
    while(ptr!=NULL)
    {
        printf("%d\t%d\n",ptr->info,ptr);
        ptr=ptr->link;
    }
}
// searching

void search(struct Node *ptr)
{
    int item,status=0;
    printf("Enter the item to search ");
    scanf("%d",&item);

    while(ptr!=NULL)
    {
        if(item==ptr->info)
        {
            printf("Item found at loc %d",ptr);
            status=1;
            break;
        }
        else{
            ptr = ptr->link;
        }
    }
    if(status==0)
        printf("item not found\n");
}

int main()
{
    struct Node *head;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head);
    printf("Linked list is as follows\n");
    display(head);

    search(head);

}