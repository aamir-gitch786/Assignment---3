/******************************************************************************

5. Write a program to check whether a given number is a three-digit number or not.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int n;
   printf("Enter the number\n");
   scanf("%d",&n);

(n>99 && n<1000)?printf("Yes it is three-digit number"): printf("No it is not a three-digit number");
    return 0;
}
