
//24. 1 + 2 + 3 + 4 + 5 + ... + n

#include <stdio.h>

main() 
{
    int n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n * (n + 1) / 2;
    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);
}
