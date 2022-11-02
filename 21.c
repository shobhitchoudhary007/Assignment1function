// Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

#include<stdio.h>
int bill(int unit)
{
    float bill;
	if(unit<=50 && unit>=0)
	{
		bill=unit*0.50;
		printf("Electricity Bill=%f Rupees",bill);
	}
	else if(unit<=100 && unit>50)
	{
		bill=50*0.50+(unit-50)*0.75;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else if(unit<=250 && unit>150)
	{
		bill=50*0.50+100*0.75+(unit-150)*1.20;
		printf("Electricity Bill=%f Rupees",bill);

	}

	else if(unit>250)
	{
		bill=50*0.50+100*0.75+100*1.20+(unit-250)*1.50;
		printf("Electricity Bill=%f Rupees",bill);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}
}
int main()
{
	float units;

	printf("Enter the units consumed=");
	scanf("%f",&units);
    printf("%d",bill(units));
}



// Input
// Enter the units consumed=75
// Output
// Electricity Bill=43.750000 Rupees