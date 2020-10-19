#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter Three number with giving space between them(a b c)- ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("a is the greatest number.\n");
        if(b>c)
            printf("c is the smallest number.");
        else
            printf("b is the smallest number.");
    }
    else if(b>a && b>c)
    {
        printf("b is the greatest number.\n");
        if(a>c)
            printf("c is the smallest number.");
        else
            printf("a is the smallest number.");
    }
    else
    {
        printf("c is the greatest number.\n");
        if(b>a)
            printf("a is the smallest number.");
        else
            printf("b is the smallest number.");
    }
}
