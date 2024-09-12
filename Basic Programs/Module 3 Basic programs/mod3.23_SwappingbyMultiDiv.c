// 24.Accept 5 employees name and salary and count average and total salary
    
#include <stdio.h>
main() {
    
    char name1[30], name2[30], name3[30], name4[30], name5[30];
    int salary1, salary2, salary3, salary4, salary5;
    int totalSalary;
    int averageSalary;
    
    
    printf("Enter name of employee 1: ");
    scanf("%c", &name1);
    printf("Enter salary of employee 1: ");
    scanf("%d", &salary1);
    
    
    printf("\n Enter name of employee 2: ");
    scanf("%c", &name2); 
    printf("Enter salary of employee 2: ");
    scanf("%d", &salary2);
    
    
    printf("Enter name of employee 3: ");
    scanf("%c", &name3); 
    printf("Enter salary of employee 3: ");
    scanf("%d", &salary3);
    
    
    printf("Enter name of employee 4: ");
    scanf("%c", &name4); 
    printf("Enter salary of employee 4: ");
    scanf("%d", &salary4);
    
   
    printf("Enter name of employee 5: ");
    scanf("%c", &name5); 
    printf("Enter salary of employee 5: ");
    scanf("%d", &salary5);
    
    
    totalSalary = salary1 + salary2 + salary3 + salary4 + salary5;
    
    
    averageSalary = totalSalary / 5;
    
    
    printf("\nTotal Salary: %d\n", totalSalary);
    printf("Average Salary: %d\n", averageSalary);
    
}

