// Write a C program to check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>
int div(int x)
{
        if((x % 5 == 0) && (x % 11 == 0))
    {
        printf("Number is divisible by 5 and 11");
    }
    else
    {
        printf("Number is not divisible by 5 and 11");
    }
}
int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);
    printf("%d",div(num));

}


// Output
// Enter any number: 55
// Number is divisible by 5 and 11