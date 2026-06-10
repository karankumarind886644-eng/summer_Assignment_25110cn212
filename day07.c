//  write a program to recursive factorial 

#include <stdio.h>

long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d = %lld\n", n, factorial(n));

    return 0;
}


//  write  a program to recursive fibonacci


#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;      // Base case

    return n * factorial(n - 1); // Recursive call
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}


// write a program to recursive sum of digit


#include <stdio.h>

int sumDigits(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d\n", sumDigits(num));

    return 0;
}



// write a program to recursive reverse number

#include <stdio.h>

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number = %d\n", reverse(num, 0));

    return 0;
}


