// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include <stdio.h>
int grade(int x)
{
        if(x >= 90)
    {
        printf("Grade A");
    }
    else if(x >= 80)
    {
        printf("Grade B");
    }
    else if(x >= 70)
    {
        printf("Grade C");
    }
    else if(x >= 60)
    {
        printf("Grade D");
    }
    else if(x >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}
int main()
{
    int phy, chem, bio, math, comp; 
    float per; 

    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &phy, &chem, &bio, &math, &comp);

    per = (phy + chem + bio + math + comp) / 5.0;

    printf("Percentage = %.2f\n", per);
    printf("%d",grade(per));
}

// Output
// Enter five subjects marks: 95
// 95
// 97
// 98
// 90
// Percentage = 95.00
// Grade A