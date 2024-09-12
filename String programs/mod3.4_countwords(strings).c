// 4. Write a program in C to count the total number of words in a string.

#include <stdio.h>
main() 
{
    char str[200];
    int word_count = 0, words = 0 , i;  
    
    printf("Enter a string: ");
    scanf(" %[^\n]", str); 
    
    for (i = 0; str[i] != '\0'; i++) 
	{
        if (str[i] != ' ')
		{
            if (!words)
			{  
                word_count++;
                words = 1;  
            }
        } else {
            words = 0;  
        }
    }
    printf("Total number of words: %d\n", word_count);
}
