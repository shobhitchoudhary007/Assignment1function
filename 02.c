// Write a C program to find maximum between three numbers.

#include <stdio.h>
int max(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("Largest number is: %d\n",max(a,b,c));
	
	return 0;
}


// Output
// Enter three numbers: 4
// 5
// 7
// Largest number is: 7