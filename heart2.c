#include <stdio.h>

int main()
{
    int i, j, n, s;

    printf("Enter value of n : ");
    scanf("%d", &n);

    for(i=n/2; i<=n; i+=2)
    {
        for(s = 1; s < n - i; s+=2)
        {
            printf("  ");
        }

        for(j=1; j<=i; j++)
        {
            printf("* ");
        }

        for(j=1; j<=n-i; j++)
        {
            printf("  ");
        }

        for(j=1; j<=i; j++)
        {
            printf("* ");
        }

        printf("\n");
       }




       for ( i = 1; i <= n - 1; i++)
       {
          for( s = 1; s <= i; s++)
          {
           printf("  ");
          }
   
          for( j = 1; j  <=  (2 * n - 1) - 2 * i ; j++) 
          {
           printf("* ");
          }
   
          printf("\n");
   
       }
       
    return 0;
}