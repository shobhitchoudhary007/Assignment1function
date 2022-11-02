// Write a C program to find maximum between two numbers.

#include<stdio.h>
int maximum(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;		
}
int main()
{
	int n1,n2,a;
	printf("Enter two numbers:\n");
	scanf("%d%d",&n1,&n2);
	a=maximum(n1,n2);
	printf("%d is a maximum number\n",a);	
}



// Output
// Enter two numbers:
// 9
// 8 
// 9 is a maximum number