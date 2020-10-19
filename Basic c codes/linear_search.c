#include<stdio.h>
#include<stdlib.h>

int linear_search(int *ptr,int sh,int n)
{
    for(int i=0;i<n;i++)
    {
        if (ptr[i]==sh)
            return 1;
    }
    return 0;
}

int main()
{
    int *ptr,n,i,sh;
    printf("how many element you want to enter-");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    printf("Enter the element-");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    printf("Which element you want to search-");
    scanf("%d",&sh);
    if(linear_search(ptr,sh,n))
        printf("Element found");
    else
        printf("Element not found");
}
