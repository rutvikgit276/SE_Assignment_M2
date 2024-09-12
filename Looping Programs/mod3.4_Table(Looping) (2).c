// 4. WAP to print table up to given numbers

#include <stdio.h>
main() 
{
    int maxNumber,i,j;

    printf("Enter the maximum number up to which you want to print the table: ");
    scanf("%d", &maxNumber);
   
    for(i=1;i<=maxNumber;i++) 
	{
        for (j = 1; j <= maxNumber; j++) 
		{
            \
            printf("%d\t", i * j);
        }
        printf("\n");  \
    }

   \
}



