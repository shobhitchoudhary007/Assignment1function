// Write a C program to calculate profit or loss.

#include <stdio.h>
int cost(int x,int y)
{
    int amt;
    if(y > x)
    {
        amt = y - x;
        printf("Profit = %d", amt);
    }
    else if(x > y)
    {
        amt = x - y;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }
}
int main()
{
    int cp,sp; 
    
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    printf("%d",cost(cp,sp));
}


// Output
// Enter cost price: 1000
// Enter selling price: 1500
// Profit = 500