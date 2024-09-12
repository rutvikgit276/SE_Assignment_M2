// 28.Convert years into days and months

#include<stdio.h>
main()
{
	int years,months,days;
	
	printf("Enter years");
    scanf("%d",&years);
    
    days=years*365;
    months=years*12;
    
    printf("%d years is approximately %d days and %d months",years,days,months);
    
}
