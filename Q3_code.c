#include <stdio.h>

int main()
{
    int sell_price,profit;
    float Cost;
    printf("Enter sell price:- ");
    scanf("%d", &sell_price);
    printf("Enter profit:- ");
    scanf("%d", &profit);
    Cost = (sell_price - profit)/15;
    printf("Cost of product:- %f", Cost);
    return 0;
}
