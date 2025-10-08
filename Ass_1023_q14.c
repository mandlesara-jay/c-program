//Compare lengths of two strings
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter str1:- ");
    scanf("%s",str1);
    printf("Enter str2:- ");
    scanf("%s",str2);
    printf("\n");

    printf("Length of str1: %lu",strlen(str1));
    printf("\nLength of str2: %lu",strlen(str2));

    printf("\n");
    if(strlen(str1)>strlen(str2))  
    {
        printf("\n 1st string is bigger");
    }
    else if(strlen(str1)==strlen(str2))
    {
        printf("\n Both string are euqal");
    }
    else
    {
        printf("\n 2nd string is bigger");
    }
    return 0;
} 
