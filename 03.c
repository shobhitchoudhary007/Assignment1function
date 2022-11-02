// Write a C program to check whether a number is negative, positive or zero.

#include <stdio.h>
int check(int x)
{
    if(x > 0)
    {
        printf("Number is POSITIVE");
    }
    if(x < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(x == 0)
    {
        printf("Number is ZERO");
    }
}
int main()
{
    int num;
    
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("%d",check(num));

}


// Output
// Enter any number: 4
// Number is POSITIVE