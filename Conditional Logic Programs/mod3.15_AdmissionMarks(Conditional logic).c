/* 15.Write a C program to determine eligibility for admission to a professional
course based on the following criteria
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks
in Chem>=50 and Total in all three subject >=190 or Total in Maths and
Physics >=140 --------------------------------------Input the marks obtained in
Physics :65 Input the marks obtained in Chemistry :51 Input the marks
obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry :
188 Total marks of Maths and Physics : 137 The candidate is not eligible. */

#include <stdio.h>

int main() {
    int physics, chemistry, maths;
    int total_all_three, total_maths_phy;

    
    printf("Enter the marks obtained in Physics: ");
    scanf("%d", &physics);

    printf("Enter the marks obtained in Chemistry: ");
    scanf("%d", &chemistry);

    printf("Enter the marks obtained in Mathematics: ");
    scanf("%d", &maths);

    
    printf("Enter the total marks of Maths, Physics, and Chemistry: ");
    scanf("%d", &total_all_three);

    printf("Enter the total marks of Maths and Physics: ");
    scanf("%d", &total_maths_phy);

   
    if ((maths >= 65 && physics >= 55 && chemistry >= 50 && total_all_three >= 190) ||
        (total_maths_phy >= 140)) {
        printf("The candidate is eligible.\n");
    } else {
        printf("The candidate is not eligible.\n");
    }

}

