/******************************************************************************
16. Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a;
    printf("Enter the character : ");
    scanf("%c",&a);
    if(a>=65 && a<=122)
    (a>=65 && a<=90)?printf("%c is Alphabet(uppercase)",a):printf("%c is Alphabet(lowercase)",a);
    else if(a>=48 && a<=57)
    printf("%c is digit ",a);
    else
    printf("%c is a special character",a);
   return 0;
}

