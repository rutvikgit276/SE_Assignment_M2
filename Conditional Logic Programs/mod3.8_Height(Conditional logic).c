// 9. C Program to Check Uppercase or Lowercase or Digit or Special
//    Character

#include<stdio.h>
main()
{
	char ch;
	
	printf("Enter a character:");
	scanf("%d",&ch);
	
		if(ch>='A' && ch<='Z')
	{
	
		printf("Your Character is Uppercase");
 	}
		else if(ch>='a' && ch<='z')
	{
	
		printf("Your Character is Lowercase");
	}
		else if(ch>='0' && ch<='9')
	{
	
		printf("Your Character is a digit");
	}
		else
		{
		printf("THe character is a special character");
	}	
	}
