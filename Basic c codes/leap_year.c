#include<stdio.h>

int main()
{
    int year;
    printf("Enter the year to check whether it is a leap year or not- ");
    scanf("%d",&year);
    if (year%400==0 || (year%4==0 && year%100!=0))
        printf("The year is leap year");
    else
        printf("The year is not a leap year");
}
