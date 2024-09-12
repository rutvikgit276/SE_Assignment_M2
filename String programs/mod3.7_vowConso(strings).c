// 8. Write a program in C to count the total number of vowels or consonants in a 
//		string. 

#include <stdio.h>
main()
{
    char a[50];
    int vowel = 0, conso = 0, i;
    printf("Please enter the string:");
    gets(a);
    for (i = 0; a[i] != 0; i++)
    {
        if ((a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u') || (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'))
        {
            vowel++;
        }
        else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
        {
            conso++;
        }
    }
    printf("\nTotal vowels:%d", vowel);
    printf("\nTotal consonants:%d", conso);
}
