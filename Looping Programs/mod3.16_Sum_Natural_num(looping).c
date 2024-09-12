// 16. Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n;            
    int sum = 0;      
    int i = 1;        

    
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) 
	{
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    
    while (i <= n) 
	{
        sum += i;  
        i++;       
    }

    
    printf("The sum of natural numbers up to %d is %d\n", n, sum);

    return 0;
}

