#include<stdio.h>
int main() {
    int a, i, j;

    printf("Enter a number (rows): ");
    scanf("%D", &a);
    
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}