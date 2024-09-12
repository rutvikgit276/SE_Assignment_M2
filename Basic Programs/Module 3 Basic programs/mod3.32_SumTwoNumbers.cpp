// 33.C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)


#include<stdio.h>
main()
{
	int n;
	
	printf("Enter a Integer");
	scanf("%d",&n);
	
	printf("The first three powers of %d are",n);
	
	printf("\n %d^1=%d",n,n);
	printf("\n %d^2=%d",n,n*n);
	printf("\n %d^3=%d",n,n*n*n);
	 
    
}
