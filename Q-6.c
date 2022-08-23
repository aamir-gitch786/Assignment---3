/******************************************************************************

6. Write a program to print greater between two numbers. Print one number of both are
the same.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter the first number\n");
   scanf("%d",&a);
   printf("Enter the Secode number\n");
   scanf("%d",&b);

a>b?printf("%d is greater number ",a): b>a? printf("%d is greter number",b):printf("%d and %d are same number",a,b);
    return 0;
}
