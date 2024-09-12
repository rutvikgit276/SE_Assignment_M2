// 8. WAP to accept the height of a person in centimeters and categorize the
 // person according to their height.

#include<stdio.h>
main()
{
	int height;
	
	printf("Enter your height");
	scanf("%d",&height);
	
	if(height<150){
	
	printf("Your height is below Average");
}
	else if(height<159)
	{
	
	printf("Your height is Average");
}
	else if(height<169)
	{
	
	printf("Your height is Above Average");
}
	else{
	printf("You are tall");
}
}
