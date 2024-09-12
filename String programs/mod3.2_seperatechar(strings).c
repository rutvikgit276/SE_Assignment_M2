// 2. Write a program in C to separate individual characters from a string. 

#include <stdio.h>
main() 
{
	int i;
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);  

    printf("Individual characters in the string are:\n");
    for (i = 0; str[i] != '\0'; i++) 
	{
        printf("%c\n", str[i]);  
    }
}
