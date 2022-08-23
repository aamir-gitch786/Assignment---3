/******************************************************************************

 2. Write a program to check whether a given number is divisible by 5 or not

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n%5==0? printf("Yes it is divisible by 5"): printf("No it is not divisible by 5");


    return 0;
}

