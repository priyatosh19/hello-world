#include<stdio.h>

int main()
{
    int num,flag=0;
    printf("Enter the number to check whether it is prime or not- ");
    scanf("%d",&num);
    for(int i=2;i<=(num/2)+1;i++)
    {
        if(num%i==0)
        {
            printf("Number is not prime.");
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Number is prime.");
}
