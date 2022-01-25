#include <stdio.h>

int main()
{
    float km;
    printf("Enter Distance in Kilometer:- ");
    scanf("%f", &km);
    printf("Feet:- %f \n", 3280.84*km);
    printf("Meter:- %f \n", 1000*km);
    printf("Inch:- %f \n", 39370.1*km);
    printf("Centimeter:- %f \n", 100000*km);
    return 0;
}
