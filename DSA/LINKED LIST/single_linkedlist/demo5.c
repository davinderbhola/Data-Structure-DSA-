// instertion at loc
#include<stdio.h>
#include<process.h>

struct Node
{
    int info;
    struct Node *link;
};

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
        list->link=NULL;
    }
    else
    {
        list->link=(struct Node*)malloc(sizeof(struct Node));
        create(list->link);
    }

}
// insertion at loc

void insert(struct Node *ptr)
{
    struct Node *new;
    struct Node *loc;

    int item;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL){
        printf("overflow condition");
    }
    else
    {
        printf("enter the loc : ");
        scanf("%d",&loc);
        printf("\nenter the info of new node ");
        scanf("%d",&item);
        new->info=item;
        new->link=loc->link;
        loc->link=new;
    
    }

}
void display(struct Node *ptr)
{
    printf("INFO\t ADDRESS\n");
    while(ptr!=NULL)
    {
        printf("%d\t%d\n",ptr->info,ptr);
        ptr=ptr->link;
    }
}

int main()
{
    struct Node *head;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head);
    printf("linked list is :\n");
    display(head);
    
    insert(head);
    printf("after insertion :\n ");
    display(head);
}