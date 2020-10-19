#include<stdio.h>
#include<stdlib.h>

int selection_sort(int *ptr,int n)
{
    int temp,min_idx;
    for(int i=0;i<n;i++)
    {
        min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(ptr[j]<ptr[min_idx])
            {
                min_idx=j;
            }
        }
        temp=ptr[i];
        ptr[i]=ptr[min_idx];
        ptr[min_idx]=temp;
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

    selection_sort(ptr,n);
    printf("After sorting the element- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}


