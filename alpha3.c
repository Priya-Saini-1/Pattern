#include<stdio.h>
int main() {
    int a, i, j;
    char  letter = 'A';

    printf("Enter a number (rows): ");
    scanf("%d", &a);
    
    for (i = 1; i <= a; i++) {
        for (j = 0; j < i; j++) {
            printf("%c ", letter);
          letter++;
        }
        letter = 'A';
        printf("\n");
    }
    return 0;
}