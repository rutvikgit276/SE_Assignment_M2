// 5. Write a program in C to compare two strings without using string library 
//	functions.


#include <stdio.h>
main() 
{
    char str1[100], str2[100];
    int i;

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] == str2[i]; i++) 
	{
        if (str1[i] == '\0' && str2[i] == '\0') 
		{
            printf("The strings are equal.\n");
        }
    }
    if (str1[i] > str2[i]) 
	{
        printf("The first string is greater.\n");
    } else {
        printf("The second string is greater.\n");
    }
}
