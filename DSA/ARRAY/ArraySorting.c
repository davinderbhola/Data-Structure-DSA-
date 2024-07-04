// selection short
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the size of element : ");
    scanf("%d",&n);
    int a[n];
    printf("enter the %d values : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int min,loc,temp,j;
    for(i=0;i<=n-1;i++)
    {
        min = a[i];
        loc=i;

        for(j= i+1;j<=n-1;j++)
        {
            if(min > a[j])
            {
                min = a[j];
                loc=j;
            
            }
        }
        temp = a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

    printf("Array values are\n ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
}