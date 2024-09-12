/* 9. WAP to show difference between Structure and Union.
	
*/

#include <stdio.h>
#include <string.h>


struct PersonStruct {
    int age;
    float salary;
    char name[20];
};

// Define a union
union PersonUnion {
    int age;
    float salary;
    char name[20];
};

int main() {
   
    struct PersonStruct person1;
    union PersonUnion person2;

    
    person1.age = 30;
    person1.salary = 55000.50;
    strcpy(person1.name, "John");

    
    person2.age = 30;
    printf("Union: Age = %d\n", person2.age);
    
    person2.salary = 55000.50;
    printf("Union: Salary = %.2f\n", person2.salary);
    
    strcpy(person2.name, "John");
    printf("Union: Name = %s\n", person2.name);


    printf("\nStructure: Age = %d\n", person1.age);
    printf("Structure: Salary = %.2f\n", person1.salary);
    printf("Structure: Name = %s\n", person1.name);

    printf("\nSize of structure: %lu bytes\n", sizeof(person1));
    printf("Size of union: %lu bytes\n", sizeof(person2));

    return 0;
}

