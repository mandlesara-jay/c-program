//Find the smallest of four numbers
#include<stdio.h>
int main()
{
  int arr[100],i,small;
  for(i=0;i<4;i++)
  {
    printf("Enter arr[%d]:- ",i);
    scanf("%d",&arr[i]);
  }
  small=arr[0];
  for(i=1;i<4;i++)
  {
     if(arr[i]<small)
    {
      small=arr[i];
    }
  }
  printf("\n smallest number is %d",small);
  return 0;
}