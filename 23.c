// Write a C program swap two number without using third variable (pointer).
#include<stdio.h>
void Swap(int *a, int *b)
{             
 int temp;
 *a=*a+*b;
 *b=*a-*b;
 *a=*a-*b;
}
 
int main()
{
int a,b;
printf("Enter the value of A: ");
scanf("%d",&a);
printf("Enter the value of B: ");
scanf("%d",&b);
Swap(&a,&b);
printf("After Swapping\n");
printf("A: %d\n", a);
printf("B: %d", b);
return 0;
}


// Output
// Enter the value of A: 2
// Enter the value of B: 3
// After Swapping
// A: 3
// B: 2