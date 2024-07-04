// traversing algo
#include<stdio.h>
int main()
{
    int n,i;
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
    
    return 0;
}