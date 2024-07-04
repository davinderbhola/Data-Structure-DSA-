// queue in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
typedef struct node *nodptr;

struct queue
{
    nodptr front;
    nodptr rear;
};

//nodptr *s;
void insert(struct queue *q)
{
    int x;
    printf("enter the item : ");
    scanf("%d",&x);
    nodptr s;
    s=(nodptr)malloc(sizeof(struct node));
    s->info=x;
    s->next=NULL;

    if(q->rear==NULL)
    {
        q->front=s;
    }
    else{
        (q->rear)->next=s;
    }
    q->rear=s;

    printf("element is inserted at rear : %d\n\n",x);
    return ;
}

void delet(struct queue *q)
{
    int x;
    nodptr s;
    if(q->front==NULL)
    {
        printf("queue is empty !\n");
        return;
    }
    s=q->front;
    x=s->info;
    q->front=s->next;
    if(q->front==NULL)
    {
        q->rear=NULL;
    }
    free(s);
    printf("%d iteam is deleted.",x);
    return ;
}
void show(struct queue *q)
{
    nodptr s;
    s=q->front;
    printf("item\t\taddress\n");
    while(s!=NULL)
    {
        
        printf("%d\t\t%d\n",s->info,s->next);
        s=s->next;
    }
    if (q->front != NULL) {
        printf("Front item: %d\n", q->front->info);
    } else {
        printf("Queue is empty!\n");
    }
    if (q->rear != NULL) {
        printf("Rear item: %d\n", q->rear->info);
    } else {
        printf("Queue is empty!\n");
    }
    return;
}


int main()
{
    // int x;
 int choice;
 

     int x;
    struct queue *q;
    q->front=NULL;
    q->rear=NULL;

    while(1)
    {
        printf("\n");
         printf("\n1. instertion\n");
         printf("2. deletion\n");
         printf("3. show insert vales\n");
         printf("4. exit\n");

         printf("enter the choice : ");
         scanf("%d",&choice);
         printf("\n");

        switch(choice)
        {
            case 1:
            insert(q);
            break;
            case 2:
            delet(q);
            break;
            case 3:
            show(q);
            break;
            case 4:
            exit(0);
            break;
        }
     }   

}