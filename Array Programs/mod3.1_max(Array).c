//2. WAP of Addition, Subtraction, Multiplication and Division using Switch 
//   case.(Must Be Menu Driven)

#include <stdio.h>

main() 
{
    int choice, i, n;
    float num1[100], num2[100], result[100];

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    
    printf("Enter elements of the first array:\n");
    for(i = 0; i < n; i++)
	{
        scanf("%f", &num1[i]);
    }

    printf("Enter elements of the second array:\n");
    for(i = 0; i < n; i++) 
	{
        scanf("%f", &num2[i]);
    }

    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) 
		{
            case 1:
                printf("Addition of the arrays:\n");
                for(i = 0; i < n; i++) 
				{
                    result[i] = num1[i] + num2[i];
                    printf("%.2f ", result[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Subtraction of the arrays:\n");
                for(i = 0; i < n; i++) 
				{
                    result[i] = num1[i] - num2[i];
                    printf("%.2f ", result[i]);
                }
                printf("\n");
                break;

            case 3:
                printf("Multiplication of the arrays:\n");
                for(i = 0; i < n; i++) 
				{
                    result[i] = num1[i] * num2[i];
                    printf("%.2f ", result[i]);
                }
                printf("\n");
                break;

            case 4:
                printf("Division of the arrays:\n");
                for(i = 0; i < n; i++) {
                    if (num2[i] != 0) 
					{
                        result[i] = num1[i] / num2[i];
                        printf("%.2f ", result[i]);
                    } else 
					{
                        printf("Division by zero is not allowed! ");
                    }
                }
                printf("\n");
                break;

            case 5:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 5);

    return 0;
}

