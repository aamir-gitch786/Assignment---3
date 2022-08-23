/******************************************************************************
15. Write a program to check whether a given number is positive, negative or zero.
*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number\n");
    scanf("%d",&a);
   (a>0)?printf("%d is positive",a): (a<0)?printf("%d is negative",a):printf("%d is zero",a);


    return 0;
}

