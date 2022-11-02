// Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>
int tri(int x,int y,int z)
{
    int sum;
    sum = x + y + z; 
    if(sum == 180 && x > 0 && y > 0 && z > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
}
int main()
{
    int angle1, angle2, angle3;

    printf("Enter three angles of triangle: \n");
    scanf("%d%d%d", &angle1, &angle2, &angle3);
    printf("%d",tri(angle1,angle2,angle3));

}



// Input 
// Enter three angles of triangle:
// 60
// 30
// 90

// Output
// The triangle is valid