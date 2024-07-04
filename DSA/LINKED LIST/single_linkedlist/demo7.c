// deletion after loc


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

void search(int item,struct Node *ptr)
{
    struct Node *save,*next;
    while(ptr->info!=item)
    {
        save=ptr;
        ptr=ptr->link;
    }

next=ptr->link;
    ptr->link=next->link;
    free(next);    
    
    //return ptr;
}
// deletion after loc
void delet(struct Node *ptr)
{
    int item;
    // struct Node *temp,*loc;
    
    printf("Enter the item ");
    scanf("%d",&item);
    search(item,ptr);
    



}


int main()
{
    struct Node *head;
    head=(struct Node*)malloc(sizeof(struct Node));
    create(head);
    printf("Linked list is as follows\n");
    display(head);

    printf("ok %d ",head);
    delet(head);
    printf("Linked list after deletion ");
    display(head);
}