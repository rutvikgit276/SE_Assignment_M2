// 3. Write a program in C to print individual characters of a string in reverse order

#include<stdio.h>
main()
{
	char str1[40];
	int i, len;
	
	printf("\n\n\t Enter a string : ");
	scanf("%s",&str1);
	len=strlen(str1);
	
	
	for(i=len-1;i>=0;i--)
	{
		printf("%c", str1[i]);
	}
}
