/*33. WAP to input the week number and print week day */

#include <stdio.h>
main() 
{
    int weekNumber;

    printf("Enter the week number (1-7): ");
    scanf("%d", &weekNumber);
    
     if (weekNumber == 1) 
	 {
        printf("Sunday\n");
    } 
	else if (weekNumber == 2) 
	{
        printf("Monday\n");
    } 
	else if (weekNumber == 3) 
	{
        printf("Tuesday\n");
    } 
	else if (weekNumber == 4) 
	{
        printf("Wednesday\n");
    } 
	else if (weekNumber == 5) 
	{
        printf("Thursday\n");
    } 
	else if (weekNumber == 6)
	 {
        printf("Friday\n");
    } 
	else if (weekNumber == 7) 
	{
        printf("Saturday\n");
    } 
	else {
        
        printf("Invalid week number. Please enter a number between 1 and 7.\n");
        
    }


   
    
   
}

	
	
