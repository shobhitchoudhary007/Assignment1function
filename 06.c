// Write a C program to check whether a year is leap year or not.

#include <stdio.h>
int leap(int x)
{
       if (x % 400 == 0) {
      printf("%d is a leap year.", x);
   }

   else if (x % 100 == 0) {
      printf("%d is not a leap year.", x);
   }

   else if (x % 4 == 0) {
      printf("%d is a leap year.", x);
   }

   else {
      printf("%d is not a leap year.", x);
   }

}
int main() {
   int year,a;
   printf("Enter a year: ");
   scanf("%d", &year);
   a=leap(year);
   printf("%d",a);
}


// Output 1
// Enter a year: 1900
// 1900 is not a leap year.

// Output 2
// Enter a year: 2012
// 2012 is a leap year.