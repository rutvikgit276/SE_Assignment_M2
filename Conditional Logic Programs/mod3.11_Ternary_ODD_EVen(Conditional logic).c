// 12.WAP to find maximum number among 3 numbers using ternary operator

#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter first number");
	scanf("%d",&a);
	
	printf("Enter Second number");
	scanf("%d",&b);
	
	printf("Enter Third number");
	scanf("%d",&c);
	
	printf("The maximum number is %d\n"),
	(a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
	
	
}
