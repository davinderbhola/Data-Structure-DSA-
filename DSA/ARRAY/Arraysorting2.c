// bubble short
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

    int temp,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    printf("Array values are\n ");
    for(i=0; i<n; i++)
    {
        printf("%d  ",a[i]);
    }
}