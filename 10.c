// Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>
int lu(char c)
{
    if(c >= 'A' && c <= 'Z')
    {
        printf("'%c' is uppercase alphabet.", c);
    }
    else if(c >= 'a' && c <= 'z')
    {
        printf("'%c' is lowercase alphabet.", c);
    }
    else
    {
        printf("'%c' is not an alphabet.", c);
    }

}
int main()
{
    char ch;

    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("%c",lu(ch));
    
}

// Input
// Enter any character: C
// Output
// 'C' is uppercase alphabet