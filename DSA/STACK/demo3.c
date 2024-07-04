// recursion 
#include<stdio.h>
#include<math.h>
int fact(int x)
{
    int f;
    if(x==0)
    f=1;
    else
    f=x*fact(x-1);
    return f;
}
int main()
{
    int a;
    printf("enter the value  : ");
    scanf("%d",&a);
    int factotial= fact(a);
    printf("%d\n",factotial);
    return 0;
}