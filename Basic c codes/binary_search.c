#include<stdio.h>
#include<stdlib.h>

binary_search(int *ptr,int sh,int first,int last)
{
    int mid;
    if(first<=last)
    {
        mid=(first+last)/2;
        if(ptr[mid]==sh)
            return 1;
        else if(ptr[mid]<sh)
            return binary_search(ptr,sh,mid+1,last);
        else
            return binary_search(ptr,sh,first,mid-1);
    }
    return 0;
}

int main()
{
    int *ptr,n,i,j,sh,first,last,temp;
    printf("how many element you want to enter-");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(int)*n);
    printf("Enter the element- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }
    //sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }

    printf("Which element you want to search-");
    scanf("%d",&sh);
    first=0;last=n-1;
    if(binary_search(ptr,sh,first,last))
        printf("Element found ");
    else
        printf("Element not found");
}

