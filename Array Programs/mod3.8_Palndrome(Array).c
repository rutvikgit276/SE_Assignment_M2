/* 8. WAP to reverse a string and check that the string is palindrome or not 
  		Write a program of structure employee that provides the following 
	a. information -print and display empno, empname, address 
	andage 
	b. Write a program of structure for five employee that 
	provides the following information -print and display 
	empno, empname, address andage
	
*/

#include <stdio.h>
#include <string.h>


void reverseString(char str[], char revStr[]) {
    int i, len = 0;
    
    
    while (str[len] != '\0') {
        len++;
    }
    
    
    for (i = 0; i < len; i++) {
        revStr[i] = str[len - i - 1];
    }
    revStr[len] = '\0';
}


int isPalindrome(char str[], char revStr[]) {
    int i = 0;
    
    
    while (str[i] != '\0') {
        if (str[i] != revStr[i]) {
            return 0; 
        }
        i++;
    }
    
    return 1; 
}

int main() 
{
    char str[100], revStr[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    reverseString(str, revStr);
    
    if (isPalindrome(str, revStr)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }
    
    return 0;
}






#include <stdio.h>

// Define a structure for Employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to display employee information
void displayEmployee(struct Employee emp) {
    printf("\nEmployee No: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

int main() {
    struct Employee emp; 

   
    printf("Enter employee number: ");
    scanf("%d", &emp.empno);
    printf("Enter employee name: ");
    scanf("%s", emp.empname);
    printf("Enter employee address: ");
    scanf("%s", emp.address);
    printf("Enter employee age: ");
    scanf("%d", &emp.age);

    displayEmployee(emp);

    return 0;
}

