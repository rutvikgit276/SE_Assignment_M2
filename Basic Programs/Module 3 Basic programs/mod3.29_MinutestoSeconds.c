// 30. WAP to convert years into days and days into years

#include<stdio.h>
main()
{
	int years,days;
	
	printf("Enter number of years");
	scanf("%d",&years);
	
	days=years*365;
	printf("%d years is approx %d days",years,days);
	
	years=days/365;
	 
	printf("Enter number of days");
	scanf("%d",&days);
	
	days=years*365;
	printf("%d days is approx %d years",days,years);
	 
    
}
