//12.Write a program in C to find the number of times a given word 'is' appears in the given string.

#include<stdio.h>
#include<string.h>
main()
{
	char str1[50];
	int i, count=0;
	
	printf("\n\n\tfind the number of times a given word 'is' appears in the given string.");
	
	printf("\n\n\tEnter the String : ");
	gets(str1);
	
	for(i=0;str1[i]!='\0';i++)
	{
		if(str1[i]=='i' && str1[i+1]=='s')
		{
			count++;
		}
	}
	printf("\n\n\t'IS' are repeated %d times in '%s'", count, str1);
}
