#include<stdio.h>
int main()
{
    int arr[10],i,j,n,temp;
    printf("Enter how many elements you want:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter arr[%d]:- ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    } 
    printf("\n ans:- ");
    for(j=0;j<n;j++)
    {
        if(arr[j]!=arr[j-1])
        {
            printf("  %d",arr[j]);
        }
    }
}