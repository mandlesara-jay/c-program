//Insert an element at a specific position in an array 
#include<stdio.h>
int main()
{
    int arr[100],n,pos,value,i;
    printf("How many elements you want:- ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter arr[%d]:- ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter pos:- ");
    scanf("%d",&pos);
    printf("Enter new value:- ");
    scanf("%d",&value);

    for(i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
    n++;
    printf("\n === Array after insering === \n");

    for(i=0;i<n;i++)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}