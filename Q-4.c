/******************************************************************************

4. Write a program to check whether a given number is an even number or an odd
number without using % operator.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);

(n ^ 1)== n + 1?printf("Even number"):printf("Odd number") ;
    return 0;
}
