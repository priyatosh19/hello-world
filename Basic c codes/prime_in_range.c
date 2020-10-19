#include<stdio.h>

int main()
{
    int n1,n2,flag;
    printf("Enter the range to calculate the prime numbers(give space between them)- ");
    scanf("%d %d",&n1,&n2);
    printf("\nThe prime numbers are- ");
    for(int i=n1;i<=n2;i++)
    {
        if(i<2)
            continue;
        else if(i==2)
            printf("2 ");
        else
        {flag=0;
        for(int j=2;j<=(i/2)+1;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",i);}
    }
}
