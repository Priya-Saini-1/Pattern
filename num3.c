#include<stdio.h>
int main() {
    int a, i, j;

    printf("Enter a number (rows): ");
    scanf("%D", &a);
    
    for (i = 1; i <= a; i++) {
        for (j = 0; j < i; j++) {
            printf("%d", i + j);
        }
        printf("\n");
    }
    return 0;
}