// Write a C program to input any character and check whether it is alphabet, digit or special character.

#include <stdio.h>
int alpha(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("'%c' is alphabet.", c);
    }
    else if(c >= '0' && c <= '9')
    {
        printf("'%c' is digit.", c);
    }
    else 
    {
        printf("'%c' is special character.", c);
    }
}
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("%c",alpha(ch));
}

// Input
// Enter any character: 3
// Output
// 3 is digit