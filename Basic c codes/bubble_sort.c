#include<stdio.h>
#include<stdlib.h>

int bubble_sort(int *ptr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
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

    bubble_sort(ptr,n);
    printf("After sorting the element- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}


