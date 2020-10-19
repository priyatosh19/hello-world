#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *arr,n,temp,i,j;
    printf("how many elements you want to enter?\n");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    if(arr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    printf("Enter the values- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp= *(arr+i);
                *(arr+i)= *(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    printf("The sorted array in ascending order is- ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    free(arr);
}
