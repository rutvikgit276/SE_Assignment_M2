// 20.Accept monthly salary from the user and deduct 10% insurance premium,
//    10% loan installment find out of remaining salary.

#include <stdio.h>
main() 

{
    double salary, insurance_premium, loan_installment, remaining_salary;

    printf("Enter your monthly salary: ");
    scanf("%lf", &salary);

    insurance_premium = salary * 0.10;
    loan_installment = salary * 0.10;

    remaining_salary = salary - (insurance_premium + loan_installment);

    printf("Remaining Salary: %.2lf\n", remaining_salary);

    return 0;
}

