// Write a program to Create menu-driven calculator

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    do
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        switch(choice)
        {
            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                if(b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Division by zero not allowed.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

//  Write a program to Create menu-driven array operation system

#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum = 0, max;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do
    {
        printf("\n===== ARRAY MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Sum of Elements\n");
        printf("3. Find Maximum\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Array: ");
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                sum = 0;
                for(i = 0; i < n; i++)
                    sum += arr[i];
                printf("Sum = %d\n", sum);
                break;

            case 3:
                max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
                break;

            case 4:
            {
                int key, found = 0;
                printf("Enter element to search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++)
                {
                    if(arr[i] == key)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Element not found.\n");
                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}

// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    do
    {
        printf("\n===== STRING MENU =====\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Reverse\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 5:
            {
                int i;
                for(i = strlen(str1)-1; i >= 0; i--)
                    printf("%c", str1[i]);
                printf("\n");
                break;
            }

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}

//  Write a program to Create inventory management system.

#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n = 0, choice, i;

    do
    {
        printf("\n===== INVENTORY MANAGEMENT =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf("%s", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                printf("Item Added Successfully!\n");
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for(i = 0; i < n; i++)
                {
                    printf("%d\t%s\t%d\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;

            case 3:
            {
                int id, found = 0;

                printf("Enter Item ID: ");
                scanf("%d", &id);

                for(i = 0; i < n; i++)
                {
                    if(item[i].id == id)
                    {
                        printf("Item Found\n");
                        printf("Name: %s\n", item[i].name);
                        printf("Quantity: %d\n", item[i].quantity);
                        printf("Price: %.2f\n", item[i].price);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Item Not Found.\n");

                break;
            }

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
