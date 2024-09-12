//13. Write a program in C to remove characters from a string except alphabets. 

#include <stdio.h>
#include <ctype.h>  
#define MAX_LENGTH 100
main() 
{
    char str[MAX_LENGTH];
    char result[MAX_LENGTH];
    int i, j = 0;

    
    printf("Enter the string: ");
    scanf("%[^\n]%*c", str); 

    
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (isalpha(str[i])) 
	{
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 

    
    printf("String with only alphabets: %s\n", result);
}

