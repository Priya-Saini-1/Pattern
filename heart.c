#include <stdio.h>

void heart_outline();


int main()
{

    heart_outline();

    return 0;
}

void heart_outline()
{
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if ((i == 0 && (j % 3 != 0)) ||
                (i == 1 && (j % 3 == 0)) ||
                (i - j == 2) ||
                (i + j == 8))
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
}

