// Write a C program to input week number and print week day.

#include <stdio.h>
int week(int x)
{
      switch (x)
  {
  	case 1:
  		printf("\n Today is Monday");
		  break;
  	case 2:
  		printf("\n Today is Tuesday");
		  break;
  	case 3:
  		printf("\n Today is Wednesday"); 
		  break;
  	case 4:
  		printf("\n Today is Thursday"); 
		  break;
  	case 5:
  		printf("\n Today is Friday"); 
		  break;
  	case 6:
  		printf("\n Today is Saturday");
		  break;
  	case 7:
  		printf("\n Today is Sunday");
		  break;
	default:
		printf("\n Please enter Valid Number between 1 to 7");
  }
}
int main()
{
  int weekday;
  printf(" Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) :  ");
  scanf("%d", &weekday);
  printf("%d",week(weekday));

}

// Output 1
// Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) :  5
// Today is Friday

// Output 2
// Please Enter the Day Number 1 to 7 (Consider 1= Monday, and 7 = Sunday) :  12
// Please enter Valid Number between 1 to 7