#include <stdio.h>

int main() {
    int n, i, j, s;

    printf("Enter a number: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
       for( s = 1; s <= i - 1; s++)
       {
        printf("  ");
       }

       for( j = 1; j  <= n + 1 - i ; j++) 
       {
        printf("* ");
       }

       printf("\n");

    }
    
    return 0;

}