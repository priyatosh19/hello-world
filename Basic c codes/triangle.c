#include<stdio.h>

int main()
{
    int i,n,j,k;
    printf("Enter the number-");
    scanf("%d",&n);
    printf("Pattern-1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern-2\n");
    for(i=0;i<n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern-3\n");
    for(i=0;i<n;i++)
    {
        for(k=n-1;k>i;k--)
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern-4\n");
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }

        for(j=n;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
