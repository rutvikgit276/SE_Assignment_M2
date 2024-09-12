// 18. Write a C Program to Print the Multiplication Table of N 

#include <stdio.h>
main() 
{
    int N; 
    int i; 

    
    printf("Enter the number for the multiplication table: ");
    scanf("%d", &N);

    
    printf("Multiplication table of %d:\n", N);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", N, i, N * i);
    }

    return 0;
}

