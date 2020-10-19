#include<stdio.h>
#include<stdlib.h>

int bintodeci()
{
    int bin,deci=0,base=1,rem;
    printf("Enter the binary number: ");
    scanf("%d",&bin);
    while(bin>0)
    {
        rem=bin%10;
        deci=deci+rem*base;
        bin=bin/10;
        base*=2;
    }
    printf("The decimal value is-%d\n ",deci);
}

int decitobin()
{
    int deci,bin=0,rem,base=1;
    printf("Enter the decimal number:- ");
    scanf("%d",&deci);
    while(deci>0)
    {
        rem=deci%2;
        bin=bin+rem*base;
        deci=deci/2;
        base*=10;
    }
    printf("The binary value is:%d\n ",bin);
}


int main()
{
    int choice=0;
    while(choice!=3)
    {
        printf("Enter your choice 1 or 2:\n1.Binary to Decimal\n2.Decimal to Binary\n3.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                bintodeci();
                break;
            case 2:
                decitobin();
                break;
            case 3:
                exit(0);
            default:
                printf("Enter correct choice.\n");
                break;
        }
    }
}
