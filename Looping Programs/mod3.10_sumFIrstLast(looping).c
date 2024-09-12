//10.Write a program you have to make a summation of first and last Digit

#include <stdio.h>

main() 
{
    int number, lastDigit, firstDigit, tempNumber;

   
    printf("Enter an integer: ");
    scanf("%d", &number);

   
    if (number < 0) {
        number = -number;
    }

    
    lastDigit = number % 10;

   
    tempNumber = number;
    while (tempNumber >= 10) {
        tempNumber /= 10;
    }
    firstDigit = tempNumber;

    
    int sum = firstDigit + lastDigit;

    
    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}

