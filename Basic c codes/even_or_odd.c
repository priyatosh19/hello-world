#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number to check whether it is even or odd- ");
    scanf("%d",&num);
    if(num%2==0)
        printf("Number is Even");
    else
        printf("Number is Odd");
}
