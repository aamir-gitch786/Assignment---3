
/******************************************************************************
13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
    (a%3==0 && a%2==0)?printf("%d is divisible by 3 and divisible by 2",a):printf("It is not divisible by 3 and 2.");


    return 0;
}
