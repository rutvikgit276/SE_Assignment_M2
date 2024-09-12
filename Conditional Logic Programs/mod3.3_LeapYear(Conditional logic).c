// 4. WAP to make simple calculator (operation include Addition, Subtraction,
//    Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
main()
{
	int a,b,choice;
	
	printf("\n\n\t Enter the first number:");
	scanf("%d",&a);
	
	printf("\n\n\t Enter the Second number:");
	scanf("%d",&b);
	
	printf("\n\n\t --------------------------");
	
	printf("\n\n\t Press 1 for Addition");
	printf("\n\n\t Press 2 for Subtraction");
	printf("\n\n\t Press 3 for Modulo");
	printf("\n\n\t Press 4 for Division");
	printf("\n\n\t Press 5 for Multiplication");
	
	printf("\n\n\t --------------------------");
	
	printf("\n\n\t Enter your choice of operation:");
	scanf("%d",&choice);
	
	if(choice==1)
	printf("\n\n\t Addition=%d",a+b);
	
	else if (choice==2)
	printf("\n\n\t Subtraction=%d",a-b);
	
	else if (choice==5)
	printf("\n\n\t Multiplication=%d",a*b);
	
	else if (choice==3)
	printf("\n\n\t Modulo=%d",a%b);
	
	else if (choice==4)
	printf("\n\n\t Division=%d",a/b);
	
	else
	printf("\n\n\t Invalid selection!!"); 
	
}
