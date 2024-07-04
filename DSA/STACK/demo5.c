// quick sort
#include<stdio.h>
#include<conio.h>

void swap(int* a, int* b)
{
int t = *a;
*a = *b;
*b = t;
}

int loc (int arr[], int beg, int end)
{
int pivot = arr[end];
int i = (beg - 1);
int j;
for (j = beg; j <= end- 1; j++)
{
if (arr[j] <= pivot)
{
i++;
swap(&arr[i], &arr[j]);
}
}

swap(&arr[i + 1], &arr[end]);
return (i + 1);
}

void quickSort(int arr[], int beg, int end)
{
if (beg < end)
{
int pi = loc(arr, beg, end);
quickSort(arr, beg, pi - 1);
quickSort(arr, pi + 1, end);
}
}

void display(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
{
printf("%d ", arr[i]);
}
}
void insert(int a)
{
    int a;
    printf("enter the no ");
    scanf("%d",&a);
    return a;
}

int main()
{
    int x,n;
printf("enter the size of array : ");
    scanf("%d",&x);
int arr[x];
insert(n);
// clrscr();
quickSort(arr, 0, n-1);
printf("The sorted array is: \n");
display(arr, n);
getch();
return 0;
}