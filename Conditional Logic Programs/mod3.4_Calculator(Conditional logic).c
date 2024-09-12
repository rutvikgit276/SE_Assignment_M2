// 5. Check Number Is Positive or Negative

#include<stdio.h>
main()
{
	int a;
	
	printf("Enter an integer:");
	scanf("%d",&a);
	
	if(a>0)
	printf("The number is positive");
	
	else if(a==0)
	printf("The number is neither positive nor negative");
	
	else
	printf("The number is negative");
	
}
