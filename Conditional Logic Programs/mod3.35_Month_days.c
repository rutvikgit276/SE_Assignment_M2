//31. Write a program in C to read any Month Number in integer and display the
// number of days for this month.

#include <stdio.h>
main() 
{
    int monthNumber;
    int days;
    
    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);

   
    if (monthNumber == 1 || monthNumber == 3 || monthNumber == 5 || monthNumber == 7 ||
        monthNumber == 8 || monthNumber == 10 || monthNumber == 12) 
		{
        days = 31;
    } 
    
	else if (monthNumber == 4 || monthNumber == 6 || monthNumber == 9 || monthNumber == 11) 
	{
        days = 30;
    } 
    
	else if (monthNumber == 2) 
	{
        days = 28; 
    } 
    
	else 
	{
    
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        return 1;
    }

  
    printf("Number of days: %d\n", days);
}

 

   
}

	
	
