//  reverse star pattern

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


//  repeated charecter pattern

#include <stdio.h>

int main() {
    int i, j;
    char ch = 'A';
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
        ch++;
    }
    return 0;
}


//  hollow square pattern

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= rows; j++) {
            if(i == 1 || i == rows || j == 1 || j == rows) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
// Write a program to Print hollow square 

    ```c
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter size of square: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {

            // Print * at borders
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
















    


    
}
