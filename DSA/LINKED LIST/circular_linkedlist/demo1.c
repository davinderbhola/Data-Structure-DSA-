// instertion at loc
#include<stdio.h>
#include<process.h>

struct Node
{
    int info;
    struct Node *link;
};
struct Node *head;
void create(struct Node *list)
{
    char ans;
    printf("enter the info value : ");
    scanf("%d",&list->info);

    printf("do you want more nodes : ");
    fflush(stdin);
    scanf("%c",&ans);
    if(ans=='n')
    {
        printf("ok  %d ",head);
        list->link=head;
    }
    else
    {
        list->link=(struct Node*)malloc(sizeof(struct Node));
        create(list->link);
    }

}
// searching
void search(struct Node *ptr)
{
    int item,status=0;
    printf("Enter the item to search ");
    scanf("%d",&item);
    ptr=ptr->link;
    while(ptr!=head)
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



void display(struct Node *ptr)
{
    ptr=ptr->link;
    printf("INFO\t ADDRESS\n");
    while(ptr!=head)
    {
        printf("%d\t%d\n",ptr->info,ptr);
        ptr=ptr->link;
    }
    //printf("Header Node info %d ",ptr->link);
    printf("Header Node info %d ",ptr->info);
    printf("Header node address  %d ",ptr);

}

int main()
{
    
    head=(struct Node*)malloc(sizeof(struct Node));
    
    create(head);
    printf("linked list is :\n");
    display(head);
    search(head);
      
}