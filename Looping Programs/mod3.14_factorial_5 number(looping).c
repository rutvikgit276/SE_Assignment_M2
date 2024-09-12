// 14.Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>


int factorial(int n) 
{
    int result = 1;
    while (n > 1) {
        result *= n;
        n--;
    }
    return result;
}

int main() 
{
    int numbers[5];
    
   
    printf("Enter 5 non-negative integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        
        
        if (numbers[i] < 0) {
            printf("Factorial is not defined for negative numbers. Setting factorial to -1 for this input.\n");
            numbers[i] = -1; 
        }
    }
    
    
    printf("\nFactorials:\n");
    for (int i = 0; i < 5; i++) 
	{
        if (numbers[i] >= 0) 
		{
            printf("Factorial of %d is %d\n", numbers[i], factorial(numbers[i]));
        } else 
		{
            printf("Factorial of negative number is not defined.\n");
        }
    }
    
    return 0;
}



