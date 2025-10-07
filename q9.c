//Compute factorial of a number
#include<stdio.h>
int main()
{
    int fact=1,i,n;
    printf("Enter number:- ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("\nAns of factorial is %d",fact);
    return 0;
}