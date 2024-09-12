// 25.Accept 5 expense from user and find average of expense
    
#include<stdio.h>
main()
{
	int expense_1,expense_2,expense_3,expense_4,expense_5,Total_expense,Average_expense;
	
	printf("Write the first expense");
	scanf("%d",&expense_1);
	
	printf("Write the second expense");
	scanf("%d",&expense_2);
	
	
	printf("Write the third expense");
	scanf("%d",&expense_3);
	
	
	printf("Write the fourth expense");
	scanf("%d",&expense_4);
	
	
	printf("Write the fifth expense");
	scanf("%d",&expense_5);
	
	Total_expense= expense_1+expense_2+expense_3+expense_4+expense_5;
	Average_expense=Total_expense/5;
	
	printf("Total expense=%d",Average_expense);
	
	
}
