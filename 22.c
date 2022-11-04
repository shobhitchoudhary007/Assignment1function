// Write a C program swap two number using third variable (pointers).
#include<stdio.h> 
void Swap(int *a, int *b)
{             
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
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

// OUTPUT:

//  Enter the value of A: 4
//  Enter the value of B: 9
//  After Swapping
//  A: 9
//  B: 4