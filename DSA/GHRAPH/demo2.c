// Merging
#include<stdio.h>

int main()
{
    int m,n,i,j,s,temp;
    printf("enter the limt of first array : ");
    scanf("%d",&m);
    int a[m];
    printf("enter the limit of second array : ");
    scanf("%d",&n);
    int b[n];
    int c[m+n];
    printf("Enter values of first array ");

    for(i=0;i<=m-1;i++)
    {
        scanf("%d",&a[i]);
    }    

    printf("Enter values of second array ");

    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&b[i]);
    }    

    for(i=0;i<=m-1;i++)
    {
        c[i]=a[i];
    }

    j=0;
    s=m+n;
    for(i=m;i<=s-1;i++)
    {
        c[i]=b[j];
        j++;
    }


    for(i=0;i<=s-2;i++)
    {
        for(j=0;j<=s-1-i;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }

    printf("Merged list is \n");
    for(i=0;i<=s-1;i++)
    {
        printf("%d\t",c[i]);
    }

}