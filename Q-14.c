/******************************************************************************
14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    (a%7==0 || a%3==0)?printf("%d is divisible by 7 or divisible by 3",a):printf("It is not divisible by 7 or 3.");


    return 0;
}

