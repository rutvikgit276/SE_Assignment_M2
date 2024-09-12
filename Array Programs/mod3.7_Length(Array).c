// 7. WAP Find out length of string without using inbuilt function

#include <stdio.h>
main() 
{
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) 
	{
        length++;
    }
    
    printf("Length of the string is: %d\n", length);

    return 0;
}

