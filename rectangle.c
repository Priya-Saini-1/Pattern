#include<stdio.h>
int main () {
    int i , j, n, b;
    
    printf("Enter a number of rows (length): ");
    scanf("%d", &n);

    printf("Enter a number of colums (height): ");
    scanf("%d", &b);

    for ( i = 1; i <= n; i++)
    {
       for ( j = 1; j <= b; j++)
       {
            if (i == 1 || i == n || j == 1 || j == b)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
       }

       printf("\n");
       
    }
    
    return 0;
    
}