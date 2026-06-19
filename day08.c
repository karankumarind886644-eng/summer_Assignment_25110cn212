

    // 1. Half Pyramid Pattern

#include <stdio.h>

int main() {
    int i, j;
    printf("Half Pyramid Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Number Triangle Pattern

    #include <stdio.h>

int main() {
    int i, j;
    printf("\nNumber Triangle Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    // 3. Character Triangle Pattern

    #include <stdio.h>

int main() {
    int i, j;
    printf("\nCharacter Triangle Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    // 4. Repeated Number Pattern

    #include <stdio.h>

int main() {
    int i, j;
    printf("\nRepeated Number Pattern:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
