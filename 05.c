// Write a C program to check whether a number is even or odd.

#include <stdio.h>
int even(int x)
{
    if(x % 2 == 0)
      {
        printf("%d is even.", x);
      }
    else
      {
        printf("%d is odd.", x);
      }
}
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("%d",even(num));
}


// Output
// Enter an integer: 5
// 5 is odd.
