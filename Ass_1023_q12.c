//Convert meters to centimeters 
#include<stdio.h>
int main()
{
    float meter,centi;
    printf("Enter meter:- ");
    scanf("%f",&meter);

    centi=meter*100;
    printf("\n%.2f meter = %.2f centimeter",meter,centi);
    return 0;
}
