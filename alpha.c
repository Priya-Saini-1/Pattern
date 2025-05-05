#include<stdio.h>
int main() {
    int a, i, j;
    char  letter = 'A';

    printf("Enter a number (rows): ");
    scanf("%D", &a);
    
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", letter);
            letter++;
        }
        printf("\n");
    }
    return 0;
}