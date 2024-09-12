// 11. Write a program in C to read a sentence and replace lowercase characters with 
//		uppercase and vice versa. 


#include <stdio.h>
#include <ctype.h>  
#define MAX_LENGTH 100
main() 
{
    char sentence[MAX_LENGTH];
    int i;

    printf("Enter a sentence: ");
    scanf("%[^\n]%*c", sentence); 

    for (i = 0; sentence[i] != '\0'; i++) 
	{
        if (islower(sentence[i])) 
		{
            sentence[i] = toupper(sentence[i]);
        } else if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }
    printf("Modified sentence: %s\n", sentence);
}
