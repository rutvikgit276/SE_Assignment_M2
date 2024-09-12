// 21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//    and without using 3rd variable

#include<stdio.h>
main()
{
	int a, b, c;
	
	printf("\n\n\t Enter any two numbers  : ");
	scanf("%d %d", &a, &b);
	
	printf("\n\n\n\t Before Swapping ----------------");
	printf("\n\n\t a = %d", a);
	printf("\n\n\t b = %d", b);
	/*c=a;
	a=b;
	b=c;*/
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\n\n\n\t After Swapping ----------------");
	printf("\n\n\t a = %d", a);
	printf("\n\n\t b = %d", b);
}
