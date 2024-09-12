//13. Write a program in C to remove characters from a string except alphabets. 

// Write a program in C to combine two strings manually 

#include <stdio.h>

#define MAX_LENGTH 100

main() 
{
    char str1[MAX_LENGTH], str2[MAX_LENGTH], combined[MAX_LENGTH * 2];
    int i, j;

    printf("Enter the first string: ");
    scanf("%[^\n]%*c", str1); 

    
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", str2); 

    for (i = 0; str1[i] != '\0'; i++) 
	{
        combined[i] = str1[i];
    }

    
    for (j = 0; str2[j] != '\0'; j++) 
	{
        combined[i + j] = str2[j];
    }

    combined[i + j] = '\0';
    printf("Combined string: %s\n", combined);
}

