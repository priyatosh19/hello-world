#include<stdio.h>

int main()
{
    int num,rem,count=0,sum=0,temp;
    printf("Enter the number- ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        count++;
        num/=10;
    }
    num=temp;
    while(temp>0)
    {
        rem=(temp%10);
        sum+=(int)(pow(rem,count)+0.5);
        temp/=10;
    }
    if(sum==num)
        printf("It is a armstrong number");
    else
        printf("It is not a armstrong number");
}

