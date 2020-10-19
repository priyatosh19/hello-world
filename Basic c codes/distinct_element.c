#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,  *arr,i,j,k;
    printf("Enter the number of element in the array-");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(n));
    printf("Enter the array element-");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
                {
                    for(k=j;k<n;k++)
                    {
                        arr[k]=arr[k+1];
                    }
                     n=n-1;
                }
        }
    }
    printf("The distinct elements are-");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
