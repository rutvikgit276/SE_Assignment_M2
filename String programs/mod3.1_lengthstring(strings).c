// 1. Write a program in C to find the length of a string without using library 
//		functions.

#include <stdio.h>
main() 
{
    char str[30];
    int length = 0,i;

    printf("Enter a string: ");
    scanf("%s", str);  
    for (i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length of the string is: %d", length);
}
