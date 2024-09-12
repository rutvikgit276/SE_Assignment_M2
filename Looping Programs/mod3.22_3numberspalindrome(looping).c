/* 22. Accept 3 numbers from user using while loop and check each numbers 
palindrome   */

#include <stdio.h>
main() 
{
    int num, rev, temp, rem, i = 0;

    while (i < 3) 
	{
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        rev = 0;
        temp = num;
        while (temp != 0) {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == num)
            printf("%d is a palindrome\n", num);
        else
            printf("%d is not a palindrome\n", num);

        i++;
    }
}

