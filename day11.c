// write function to find sum of two number

#include <stdio.h>

// Function to calculate sum of two numbers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = sum(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}


// write function to find maximum

// write function to check prime

// write function to find factorial
