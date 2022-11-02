// Write a C program to check whether a character is alphabet or not.

#include <stdio.h>
int alpha(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Character is an ALPHABET.");
    }
    else
    {
        printf("Character is NOT ALPHABET.");
    }

}
int main()
{
    char ch;
    
    printf("Enter any character: ");
    scanf("%c", &ch);
    printf("%d",alpha(ch));
}



// Output
// Enter any character: a
// Character is an ALPHABET