//Convert all vowels in a string to uppercase
#include <stdio.h>
#include <ctype.h>

int main()
{
    char s[100];
    int i;

    printf("Enter a string: ");
    gets(s);  

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u')
        {
            s[i] = toupper(s[i]);
        }
    }

    printf("Modified string: %s\n", s);
    return 0;
}
