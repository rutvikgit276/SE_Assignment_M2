//9. Write a program make a summation of given number

#include <stdio.h>
main() 
{
    int n, i;
    int sum = 0;
    
    printf("Enter the number of integers you want to sum: ");
    scanf("%d", &n);

    
    if (n <= 0) {
        printf("The number of integers must be greater than 0.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        sum += num;  
    }

    printf("The sum of the entered integers is: %d\n", sum);

}

