/******************************************************************************
12. Write a program to check whether a given alphabet is in uppercase or lowercase.
*******************************************************************************/

#include <stdio.h>

int main()
{
    char a;
    printf("Enter the alphabet\n");
    scanf("%c",&a);
    (a>=65 && a<=90)?printf("Uppercase"):(a>=97 && a<=122)?printf("Lowercase"):printf("It is not a alphabet ");

    return 0;
}

