// 3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//	b. How many odd numbers are there
//	c. Sum of even numbers
//	d. Sum of odd numbers

#include <stdio.h>
main() 
{
    int number;  
    int i;       
    int evenCount = 0; 
    int oddCount = 0;   
    int evenSum = 0;     
    int oddSum = 0;     

    printf("Please enter 10 numbers:\n");

    for (i = 1; i <= 10; i++) 
	{
        printf("Number %d: ", i);
        scanf("%d", &number);

        
        if (number % 2 == 0) 
		{
            
            evenCount++;
            evenSum= evenSum+number;
        } else 
		{
            
            oddCount++;
            oddSum= oddSum+ number;
        }
    }


    printf("\nResults:\n");
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

}



