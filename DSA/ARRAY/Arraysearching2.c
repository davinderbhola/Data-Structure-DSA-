// binary search algo
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
    int beg = 0;
    int end = n-1;
    int mid = ((beg + end)/2);
    printf("enter the item to be serch ");
    scanf("%d",&item);

    while(item != a[mid] && beg <= end){
        if(item < a[mid]){
            end = mid -1;
        }
        else{
            beg = mid +1;
        }
        mid = ((beg+end)/2);
    }
    if (item == a[mid])
    {
        printf("element fount at loc a[%d]",mid);
    }
    else{
        printf("element not found ");
    }

    return 0;
}