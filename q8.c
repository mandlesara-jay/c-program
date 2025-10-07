//Print the first N even numbers
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter number:- ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("\t %d",i);
    }
    return 0;
}