#include<stdio.h>
#include<stdlib.h>


int insertion_sort(int *ptr,int n)
{
    int target;
    for(int i=1;i<n;i++)
    {
        target = ptr[i];
        int j = i - 1;

        while (j >= 0 && ptr[j] > target)
        {
            ptr[j + 1] = ptr[j];
            j = j - 1;
        }
        ptr[j + 1] = target;
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

    insertion_sort(ptr,n);
    printf("After sorting the element- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}

