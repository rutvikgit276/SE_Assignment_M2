// 19.

/* Pattern - 5

 	    *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * * 
*/

#include <stdio.h>
main() 
{
    int r = 1, space, stars;

    while (r <= 5) {
        
        space = 5 - r;     
        while (space > 0) {
            printf("  "); 
            space--;
        }

        // Print stars
        stars = 1;
        while (stars <= (2 * r - 1)) {
            printf("* ");
            stars++;
        }

        printf("\n");
        r++;
    }
}

