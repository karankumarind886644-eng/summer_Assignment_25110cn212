//  Write a program to Write function for palindrome

#include <stdio.h>

int palindrome(int n)
{
    int rev = 0, rem, temp;

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(rev == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(palindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}

  // Write a program to Write function for armstrong

#include <stdio.h>

int armstrong(int n)
{
    int sum = 0, rem, temp;

    temp = n;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(armstrong(num))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}


//  Write a program to Write function for fibonacci

#include <stdio.h>

void fibonacci(int n)
{
    int a = 0, b = 1, c, i;

    printf("Fibonacci Series:\n");

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}



//  Write a program to Write function for perfect 

#include <stdio.h>

int perfect(int n)
{
    int i, sum = 0;

    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(perfect(num))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;
}
