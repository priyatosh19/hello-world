#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    printf("Enter a character, digit or symbol to check it is alphabet or not- ");
    scanf("%c",&ch);
    if (isalpha(ch)==0)
        printf("\nIt is not a character");
    else
        printf("\nIt is a character");
}
