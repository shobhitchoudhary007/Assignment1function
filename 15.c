// Write a C program to input all sides of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int tri(int x,int y,int z)
{
    if((x + y) > z)
    {
        if((y + z) > x)
        {
            if((x + z) > y) 
            {                
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
}
int main()
{
    int side1, side2, side3;

    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);
    printf("%d",tri(side1,side2,side3));
    
}


// Input
//  Enter three sides of triangle:
//  7
//  10
//  5

// Output
// Triangle is valid