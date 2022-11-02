// Write a C program to count total number of notes in given amount.

#include <stdio.h>
int note(int x)
{
    int note2000,note500, note100, note50, note20, note10, note5, note2, note1;
    note2000=note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;
    if(x >= 2000)
    {
        note2000 = x/2000;
        x =x - note2000 * 2000;
    }
    if(x >= 500)
    {
        note500 = x/500;
        x =x -  note500 * 500;
    }
    if(x >= 100)
    {
        note100 = x/100;
        x =x -  note100 * 100;
    }
    if(x >= 50)
    {
        note50 = x/50;
        x =x -  note50 * 50;
    }
    if(x >= 20)
    {
        note20 = x/20;
        x =x -  note20 * 20;
    }
    if(x >= 10)
    {
        note10 = x/10;
        x =x -  note10 * 10;
    }
    if(x >= 5)
    {
        note5 = x/5;
        x =x -  note5 * 5;
    }
    if(x >= 2)
    {
        note2 = x /2;
        x =x -  note2 * 2;
    }
    if(x >= 1)
    {
        note1 = x;
    }

    printf("Total number of notes = \n");
    printf("2000 = %d\n", note2000);
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);
}
int main()
{
    int amount;

    printf("Enter amount: ");
    scanf("%d", &amount);
    printf("%d",note(amount));
    
}


// Enter amount: 4673
// Total number of notes = 
// 2000=2
// 500 = 1
// 100 = 1 
// 50 = 1 
// 20 = 1 
// 10 = 0 
// 5 = 0 
// 2 = 1 
//x