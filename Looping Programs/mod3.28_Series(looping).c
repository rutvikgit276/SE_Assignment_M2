
// 28. 1 2 3 6 9 18 27 54...

#include <stdio.h>
main() 
{
    int n, i;
    int seq[100]; 

    printf("Enter the number of terms: ");
    scanf("%d", &n);
   
    seq[0] = 1;
    seq[1] = 2;
    seq[2] = 3;
    
    printf("%d %d %d ", seq[0], seq[1], seq[2]);

    for (i = 3; i < n; i++) {
        seq[i] = seq[i-1] + seq[i-2] + seq[i-3];
        printf("%d ", seq[i]);
    }

    printf("\n");
}

