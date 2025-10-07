//Calculate the circumference of a circle 
#include<stdio.h>
int main()
{
    float r,pie=3.14,circumference;
    printf("Enter radius of circle:- ");
    scanf("%f",&r);

    circumference=2*pie*r;
    
    printf("circumference of circle is %f",circumference);
    return 0;
}