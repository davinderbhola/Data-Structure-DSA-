// deletion at beg
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
// deletion at beg
struct node* delet(struct Node *ptr)
{
    int item;
    struct Node *temp;
    if(ptr==NULL)
    {
        printf("Underflow occurs");
    }
    else
    {
        item=ptr->info;
        temp=ptr;
        ptr=ptr->link;
        free(temp);
        return ptr;
    }

}


int main()
{
    struct Node *head;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head);
    printf("Linked list is as follows\n");
    display(head);

    head=delet(head);
    printf("Linked list after deletion ");
    display(head);
}