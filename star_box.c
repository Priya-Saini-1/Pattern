#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,j;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j=1; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}