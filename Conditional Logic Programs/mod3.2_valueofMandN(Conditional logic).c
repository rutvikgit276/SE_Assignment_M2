// 3. WAP to check if the given year is a leap year or not.

#include<stdio.h>
main()
{
	int year;
	printf("Enter the year");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("The %d is a leap year",year);
		
	}	
	else
	{
		printf("The %d is not a leap year",year);
	}
}
