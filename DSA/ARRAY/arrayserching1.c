// linear search algo
#include<stdio.h>
int main()
{
    int n,i,item,loc,k,status = 0;
    printf("enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array values are\n ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }

    printf("enter the item to be serch ");
    scanf("%d",&item);
    i=0;
    while(i <= n-1){
    if(item == a[i]){
         printf("element found at location a[%d]\n",i);
         status = 1; 
    }
    i++;
    }
    if(status == 0)
    {
        printf("element not found\n");
    }

    return 0;
}