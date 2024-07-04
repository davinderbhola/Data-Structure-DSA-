// insertion and deletion algo
#include<stdio.h>
int main()
{
    int n,i,item,loc,k;
    printf("enter the size of array ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values ",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
//  insertion

    printf("Enter the element to delet ");
    scanf("%d",&item);
    printf("enter the location ");
    scanf("%d",&loc);
    k=n-1;
    while(k>=loc)
    {
        a[k+1]=a[k];
        k--;
    }
    a[loc]=item;

    // deletion
    
    printf("enter the location delet element");
    scanf("%d",&loc);
    item = a[loc];
    

    printf("Array values are\n ");
    for(i=0; i<n-1; i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}