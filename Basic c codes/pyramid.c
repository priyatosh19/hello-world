#include<stdio.h>

int main()
{
    int i,n,j,k;
    printf("Enter the number-");
    scanf("%d",&n);
    printf("Pattern-1\n");
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern-2\n");
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<2*i-1;k++)
        {
            if(k==0 || k==2*i-2 || i==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("Pattern-3\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=2*n;k>2*i-1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("Pattern-4\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=2*n;k>2*i-1;k--)
        {
            if(k==2*n || k==2*i || i==1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
