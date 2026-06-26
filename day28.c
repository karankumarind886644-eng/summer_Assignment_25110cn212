// Write a program to Create library management system 

#include <stdio.h>

int main() {
    int choice;
    int bookID = 0;
    char bookName[50];

    while (1) {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &bookID);

                printf("Enter Book Name: ");
                scanf(" %[^\n]", bookName);

                printf("Book Added Successfully!\n");
                break;

            case 2:
                printf("Book Issued Successfully!\n");
                break;

            case 3:
                printf("Book Returned Successfully!\n");
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}

// Write a program to Create bank account system

#include <stdio.h>

int main() {
    int choice;
    float balance = 1000, amount;

    while (1) {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);

                balance += amount;

                printf("Deposit Successful!\n");
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal Successful!\n");
                } else {
                    printf("Insufficient Balance!\n");
                }
                break;

            case 3:
                printf("Current Balance = %.2f\n", balance);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}


// Write a program to Create ticket booking system

#include <stdio.h>

int main() {

    int choice;
    int seats = 50;
    int book;

    while (1) {

        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Available Seats\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Number of Tickets: ");
                scanf("%d", &book);

                if (book <= seats) {
                    seats -= book;
                    printf("Booking Successful!\n");
                } else {
                    printf("Not Enough Seats!\n");
                }
                break;

            case 2:
                printf("Enter Number of Tickets to Cancel: ");
                scanf("%d", &book);

                seats += book;
                printf("Ticket Cancelled!\n");
                break;

            case 3:
                printf("Available Seats = %d\n", seats);
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}


//  Write a program to Create contact  management system

#include <stdio.h>

int main() {

    int choice;
    char name[50];
    char phone[20];

    while (1) {

        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. View Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", name);

                printf("Enter Phone Number: ");
                scanf("%s", phone);

                printf("Contact Saved Successfully!\n");
                break;

            case 2:
                printf("\nName : %s\n", name);
                printf("Phone: %s\n", phone);
                break;

            case 3:
                printf("Contact Deleted Successfully!\n");
                name[0] = '\0';
                phone[0] = '\0';
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }
}