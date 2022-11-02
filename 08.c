// Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
int vowel(char ch)
{
    int lowercase_vowel, uppercase_vowel;
    lowercase_vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_vowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lowercase_vowel==ch || uppercase_vowel==ch)
        printf("%c is a vowel.", ch);
    else
        printf("%c is a consonant.", ch);
}
int main() 
{
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    printf("%c",vowel(c));
}


// Input
// Enter an alphabet: G
// Output
// G is a consonant.