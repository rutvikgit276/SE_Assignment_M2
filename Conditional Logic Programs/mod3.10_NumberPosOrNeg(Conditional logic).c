// 11.WAP to find number is even or odd using ternary operator

#include<stdio.h>
main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	
	(a%2==0)?printf("%d is even.\n",a):printf("%d is odd.\n",a);
	
}
