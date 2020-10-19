#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number to check positive or negative- ");
    scanf("%d",&num);
    if(num>0)
        printf("Number is positive");
    else
        printf("Number is negative");
}
