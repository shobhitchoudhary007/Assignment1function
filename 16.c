// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>
int tri(int x,int y,int z)
{
    if(x==y && y==z) 
    {
        printf("Equilateral triangle.");
    }
    else if(x==y || x==z || y==z) 
    {
        printf("Isosceles triangle.");
    }
    else 
    {
        printf("Scalene triangle.");
    }
}
int main()
{
    int side1, side2, side3;

    printf("Enter three sides of triangle: ");
    scanf("%d%d%d", &side1, &side2, &side3);
    printf("%d",tri(side1,side2,side3));
}




// Input
// Enter three sides of triangle: 30
// 30
// 30
// Equilateral triangle.