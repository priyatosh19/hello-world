#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the number to which the sum will be calculated- ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural number is %d.",n,sum);
}
