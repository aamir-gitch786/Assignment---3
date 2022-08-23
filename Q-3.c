/******************************************************************************

3. Write a program to check whether a given number is an even number or an odd
number.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    n%2==0? printf("Even Number"): printf("Odd number");


    return 0;
}
