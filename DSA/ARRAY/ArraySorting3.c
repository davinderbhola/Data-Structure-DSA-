// insertion short

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
        printf("%d ",a[i]);
    }
    int temp,ptr;
    for(i=1;i<=n-1;i++)
    {
        temp = a[i];
        ptr = i-1;
        while(temp < a[ptr] && ptr >= 0)
        {
            a[ptr + 1] = a[ptr];
            ptr = ptr-1;
        }
        a[ptr+1] = temp;
    }
    printf("\nafter sorting\n");
    printf("Array values are\n ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
    
    return 0;
}