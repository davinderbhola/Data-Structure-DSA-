#include<stdio.h>
int main()
{
    int n1=0,n2=1,n3,i,n;
    printf("enter the number : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        n3 = n1;
        n3=n1+n2;
    }
    printf("%d ",n3);
    return 0;
}