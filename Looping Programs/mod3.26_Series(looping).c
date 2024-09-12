
// 26.(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 

#include <stdio.h>
main() 
{
    int n, sum = 0, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= i; j++) 
        {
            sum += j;
        }
    }

    printf("Sum of the series is: %d\n", sum);
}
