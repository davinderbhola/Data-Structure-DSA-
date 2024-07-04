// instertion at beg 
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
// insterstion at beg
struct node* insert(struct Node *ptr)
{
    struct Node *new;
    int item;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL){
        printf("overflow condition");
    }
    else
    {
        printf("\nenter the info of new node ");
        scanf("%d",&item);
        new->info=item;
        new->link=ptr;
        ptr=new;
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

    head=insert(head);
    display(head);
}