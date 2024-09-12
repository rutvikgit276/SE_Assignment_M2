// 14.WAP to find the largest of three numbers.

#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three integers:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c )
	{
		printf("a is the largest number");
	  }  
	  if(b>a && b>c )
	  {
	  	
	  	printf("b is the largest number");
	  }
	  if(c>a && c>b)
	  
	  {
	  	printf("c is the largest number");
	  }
}

