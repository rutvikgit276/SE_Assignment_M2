// 10.WAP to check whether a number is negative, positive or zero

#include<stdio.h>
main()
{
	int a;
	printf("\n\n\t Enter a number :");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("\n\n\t The %d number is equal to zero",a);
	}
	
	else if(a>0)
	{
		printf("\n\n\t The %d number is Positive",a);
		
	}
	else
	{
		printf("\n\n\t The %d number is Negative",a);
	}
	
	
}
