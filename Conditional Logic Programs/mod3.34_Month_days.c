/*34. Accept month number and display month name */

#include <stdio.h>
main() 
{
    int monthNumber;

    printf("Enter the month number (1-12): ");
    scanf("%d", &monthNumber);
    
     if (monthNumber == 1) 
	 {
        printf("January\n");
    } 
	else if (monthNumber == 2) 
	{
        printf("February\n");
    } 
	else if (monthNumber == 3) 
	{
        printf("March\n");
    } 
	else if (monthNumber == 4) 
	{
        printf("April\n");
    } 
	else if (monthNumber == 5) 
	{
        printf("May\n");
    } 
	else if (monthNumber == 6)
	 {
        printf("June\n");
    } 
	else if (monthNumber == 7) 
	{
        printf("July\n");
    }
        
        else if (monthNumber == 8) 
	{
        printf("August\n");
    }
        
        else if (monthNumber == 9) 
	{
        printf("September\n");
        }
        
        else if (monthNumber == 10) 
	{
        printf("October\n");
        }
        
        else if (monthNumber == 11) 
	{
        printf("November\n");
        
    } 
    
     else if (monthNumber == 12) 
	{
        printf("December\n");
        
    } 
	else {
        
        printf("Invalid month number. Please enter a number between 1 and 12.\n");
        
    }


   
    
   
}

	
	
