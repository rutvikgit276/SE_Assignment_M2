 

//15.  Write a program in C to find the largest and smallest words in a string. 

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 200
main() 
{
    char str[MAX_LENGTH],smallest[MAX_LENGTH], largest[MAX_LENGTH],currentWord[MAX_LENGTH];
    int i, start, length;

    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);

    smallest[0] = '\0';
    largest[0] = '\0';
    length = 0;

    start = 0;
    for (i = 0; ; i++) 
	{
        if (isspace(str[i]) || str[i] == '\0') 
		{
            if (i > start) 
			{
                strncpy(currentWord, &str[start], i - start);
                currentWord[i - start] = '\0';

                
                if (strlen(smallest) == 0 || strlen(currentWord) < strlen(smallest)) 
				{
                    strcpy(smallest, currentWord);
                }
                if (strlen(currentWord) > strlen(largest)) 
				{
                    strcpy(largest, currentWord);
                }
            }
            if (str[i] == '\0') break;
            start = i + 1;
        }
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
}
