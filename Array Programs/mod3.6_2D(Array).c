//6. WAP to make addition, Subtraction and multiplication of two matrix using 
//   2-D Array 
 
#include <stdio.h>

#define MAX 10 
//
void inputMatrix(int matrix[MAX][MAX], int row, int col) {
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("Enter element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}


void displayMatrix(int matrix[MAX][MAX], int row, int col) {
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}


void addMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}


void subtractMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    int i, j;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}


void multiplyMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) {
    int i, j, k;
    for(i = 0; i < row1; i++) {
        for(j = 0; j < col2; j++) {
            result[i][j] = 0; 
            for(k = 0; k < col1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    int choice;

    
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &row1, &col1);

    
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &row2, &col2);

    
    printf("Enter elements of first matrix:\n");
    inputMatrix(matrix1, row1, col1);

    
    printf("Enter elements of second matrix:\n");
    inputMatrix(matrix2, row2, col2);

   
    do {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                if (row1 == row2 && col1 == col2) {
                    addMatrix(matrix1, matrix2, result, row1, col1);
                    printf("Result of addition:\n");
                    displayMatrix(result, row1, col1);
                } else {
                    printf("Matrices must have the same dimensions for addition!\n");
                }
                break;

            case 2:
                if (row1 == row2 && col1 == col2) {
                    subtractMatrix(matrix1, matrix2, result, row1, col1);
                    printf("Result of subtraction:\n");
                    displayMatrix(result, row1, col1);
                } else {
                    printf("Matrices must have the same dimensions for subtraction!\n");
                }
                break;

            case 3:
                if (col1 == row2) {
                    multiplyMatrix(matrix1, matrix2, result, row1, col1, col2);
                    printf("Result of multiplication:\n");
                    displayMatrix(result, row1, col2);
                } else {
                    printf("Number of columns of first matrix must be equal to the number of rows of second matrix for multiplication!\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 4);

    return 0;
}

