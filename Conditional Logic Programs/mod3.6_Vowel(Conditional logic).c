// 7. Accept marks from user and check pass or fail


#include<stdio.h>
main()
{
	int marks;
	printf("Enter marks");
	scanf("%d",&marks);
	
	if(marks>=35)
	printf("The user has passed.");
	
	else
	printf("The user has failed.");
	
}
