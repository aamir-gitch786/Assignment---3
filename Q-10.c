/******************************************************************************

 10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float C_P,S_P,profit_percentage,loss_percentage;
    printf("Enter cost price : ");
    scanf("%f",&C_P);
    printf("Enter selling price : ");
    scanf("%f",&S_P);
    if(S_P>C_P)
    printf("Profit percentage is %0.2f",((S_P-C_P)/C_P)*100);
    else
    printf("Loss percentage is %0.2f",((C_P-S_P)/C_P)*100);


    return 0;
}

