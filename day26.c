// Write a program to Create number guessing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
        else
            printf("Congratulations! Correct Guess.\n");

    } while (guess != number);

    return 0;
}

//   Write a program to Create voting eligibility system 

#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible to Vote\n");
    else
        printf("Not Eligible to Vote\n");

    return 0;
}

//  Write a program to Create ATM simulation. 

#include <stdio.h>

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        printf("\n1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Balance = %.2f\n", balance);
                break;

            case 2:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                balance += amount;
                printf("Amount Deposited Successfully\n");
                break;

            case 3:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= balance) {
                    balance -= amount;
                    printf("Amount Withdrawn Successfully\n");
                } else {
                    printf("Insufficient Balance\n");
                }
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}

//   Write a program to Create quiz application.

#include <stdio.h>

int main() {
    int score = 0;
    char ans;

    printf("1. What is the capital of India?\n");
    printf("a) Delhi  b) Mumbai  c) Chennai  d) Kolkata\n");
    scanf(" %c", &ans);

    if(ans == 'a' || ans == 'A')
        score++;

    printf("\n2. Which language is used for Android Development?\n");
    printf("a) Python  b) Java  c) C  d) PHP\n");
    scanf(" %c", &ans);

    if(ans == 'b' || ans == 'B')
        score++;

    printf("\n3. 5 + 10 = ?\n");
    printf("a) 10  b) 12  c) 15  d) 20\n");
    scanf(" %c", &ans);

    if(ans == 'c' || ans == 'C')
        score++;

    printf("\nYour Score = %d/3\n", score);

    return 0;
}