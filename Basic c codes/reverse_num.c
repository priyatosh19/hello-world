#include<stdio.h>

int main()
{
    int num,rem;
    printf("Enter the number- ");
    scanf("%d",&num);
    printf("The reverse of number %d is-",num);
    while(num>0)
    {
        rem=num%10;
        printf("%d",rem);
        num=num/10;
    }
}
