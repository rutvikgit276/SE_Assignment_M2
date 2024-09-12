// 37. WAP to show
//	ii. Vowel or Consonant using switch case

#include <stdio.h>
main()
{
	char ch;
	printf("Enter any alphabet");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a' :
		case 'e' :
		case 'i' :
		case 'o' :
		case 'u' : 
		case 'A' :
		case 'E' :
		case 'I' :
		case 'O' :
		case 'U' : printf("This is a Vowel \n");
		break;
		
		default:printf("This is a Consonant \n");
		break;
	}
		
		
	}
	
	
	
	



