//  star pyramid

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


//  reverse pyramid

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for(i = rows; i >= 1; i--) {
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
 

//  number  pyramid

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for(j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}


//  print charecter pyramid

#include <stdio.h>

int main() {
    int i, j, rows = 5;
    char ch;
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            ch = 'A' + j - 1;
            printf("%c", ch);
        }
        for(j = i-1; j >= 1; j--) {
            ch = 'A' + j - 1;
            printf("%c", ch);
        }
        printf("\n");
    }
    return 0;
}
