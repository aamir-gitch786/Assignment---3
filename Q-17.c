/******************************************************************************
17. Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.
*******************************************************************************/

#include <stdio.h>

int main()
{
   int side_1,side_2,side_3;
   printf("Enter the sides of tringle\n");
   scanf("%d%d%d",&side_1,&side_2,&side_3);
   (side_1+side_2>side_3 && side_1+side_3>side_2 && side_2+side_3>side_1)?printf("Valid tringle"):printf("Not valid tringle");
   return 0;
}

