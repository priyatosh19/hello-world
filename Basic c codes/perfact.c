#include<stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter the number to check whether the number is perfect or not- ");
    scanf("%d",&num);
    for(int i=1;i<=(num/2)+1;i++)
    {
        if(num%i==0)
            sum+=i;
    }
    if(sum==num)
        printf("The number is perfect");
    else
        printf("The number is not perfect");
}
