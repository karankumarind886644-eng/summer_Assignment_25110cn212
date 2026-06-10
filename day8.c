#include <stdio.h>

int main() {
    int i, j;

    // 1. Half Pyramid Pattern
    printf("Half Pyramid Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Number Triangle Pattern
    printf("\nNumber Triangle Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // 3. Character Triangle Pattern
    printf("\nCharacter Triangle Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    // 4. Repeated Number Pattern
    printf("\nRepeated Number Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}