#include<stdio.h>

int main()
{
    char ch;
    printf("Enter the character to check vowel or consonant- ");
    scanf("%c",&ch);
    if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        printf("\nVowel");
    else
        printf("\nconsonant");
}
