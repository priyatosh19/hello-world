#include<stdio.h>

int main()
{
    int n1,n2,i,sum=0;
    printf("Enter the first and last number of the range(give space between number) to calculate the sum- ");
    scanf("%d %d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        sum=sum+i;
    }
    printf("The sum of numbers in between range %d and %d is %d.",n1,n2,sum);
}
