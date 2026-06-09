// write a program  to copnvert decimal to binary


#include <stdio.h>

int main() {
    int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Binary = 0\n");
        return 0;
    }

    while (decimal > 0) {
        binary[i] = decimal % 2;  // Store remainder
        decimal = decimal / 2;
        i++;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }

    printf("\n");
    return 0;
}  


//  write a program to convert binary  to decimal


#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * pow(2, i);
        binary /= 10;
        i++;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}   


//  write a program to  count set bit in a number


 #include <stdio.h>

int main() {
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        count += n & 1;  // Check if last bit is 1
        n >>= 1;         // Right shift by 1
    }

    printf("Number of set bits = %d\n", count);

    return 0;
}  


//  write a program to find x^n without power()


#include <stdio.h>

int main() {
    int x, n;
    long long result = 1;

    printf("Enter base and exponent: ");
    scanf("%d %d", &x, &n);

    for (int i = 1; i <= n; i++) {
        result *= x;
    }

    printf("%d^%d = %lld\n", x, n, result);

    return 0;
}