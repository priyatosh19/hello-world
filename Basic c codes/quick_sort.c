#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partition(int *ptr,int low,int high)
{
    int pivot=ptr[high];
    int swap_index=low-1;

    for(int j=low;j<high;j++)
    {
        if(ptr[j]<pivot)
        {
            swap_index++;
            swap(&ptr[swap_index],&ptr[j]);
        }

    }
    swap(&ptr[swap_index+1],&ptr[high]);
    return (swap_index+1);
}

void quick_sort(int *ptr,int low,int high)
{
    if (low < high)
    {

        int indexPI = partition(ptr, low, high);

        quick_sort(ptr, low, indexPI - 1);
        quick_sort(ptr, indexPI + 1, high);
    }
}

int main()
{
    int *ptr,n,i;
    printf("how many element you want to enter-");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    printf("Enter the element-");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    quick_sort(ptr,0,n-1);
    printf("After sorting the element- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
