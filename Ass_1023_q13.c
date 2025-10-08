//Find the smallest of 1D array
#include<stdio.h>
int main()
{
  int arr[100],n,i,small;
  printf("How many elements you want:- ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter arr[%d]:- ",i);
    scanf("%d",&arr[i]);
  }
  small=arr[0];
  for(i=1;i<n;i++)
  {
    if(arr[i]<small)
    {
      small=arr[i];
    }
  }
  printf("\n smallest number is %d",small);
  return 0;
}
