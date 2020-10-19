#include<stdio.h>

int main()
{
    int num,fact=1;
    printf("Enter the number to calculate the factorial- ");
    scanf("%d",&num);
    for(int i=2;i<=num;i++)
    {
        fact*=i;
    }
    printf("The factorial of %d is %d",num,fact);
}
