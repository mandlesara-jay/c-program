// Compute the LCM of two numbers

#include<stdio.h>
int main()
{
  int n1,n2,i,ans1=0,ans2=0,arr1[20],arr2[20],j,found=0;
  printf("Enter n1:- ");
  scanf("%d",&n1);
  
  printf("Enter n2:- ");
  scanf("%d",&n2);
  
  for(i=1;i<=10;i++)
  {
    ans1=n1*i;
    arr1[i]=ans1;
    
    ans2=n2*i;
    arr2[i]=ans2;
   
  }
  for(i=1;i<=10 && !found;i++)
  {
    //printf("\n %d   %d",arr1[i],arr2[i]);
    for(j=1;j<=10;j++)
    {
       
      if(arr1[i]==arr2[j])
      {
        printf("\nLCM of %d and %d is  %d",n1,n2,arr1[i]);
        found=1;
        break;
      }
    }
  }
  
  
  return 0;
}
