//Reverse a given string 
#include<stdio.h>
int main()
{
    char str[100],length=0,i;
    printf("Enter a str1:- ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    printf("\n");
    for(i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
