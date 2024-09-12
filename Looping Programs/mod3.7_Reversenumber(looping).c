//7. WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
// 82746

#include<stdio.h>
main()
{
	int n, rem;
	printf("\n\n\t Enter any number :");
	scanf("%d",&n);

	while(n>0)
	{
		rem=n%10; 
		printf("%d", rem);
		n=n/10; 
	}
}
