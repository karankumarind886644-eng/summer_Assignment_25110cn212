// Write a program to Create student record system using arrays and strings. 

#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n, i, choice, searchRoll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("\nStudent %d\n", i+1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    while(1) {
        printf("\n1.Display\n2.Search\n3.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            printf("\nStudent Records\n");

            for(i=0;i<n;i++) {
                printf("\nRoll: %d", s[i].roll);
                printf("\nName: %s", s[i].name);
                printf("\nMarks: %.2f\n", s[i].marks);
            }
            break;

        case 2:
            printf("Enter Roll Number: ");
            scanf("%d",&searchRoll);

            for(i=0;i<n;i++) {
                if(s[i].roll==searchRoll) {
                    printf("\nRecord Found");
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                    break;
                }
            }

            if(i==n)
                printf("Record Not Found\n");

            break;

        case 3:
            return 0;

        default:
            printf("Invalid Choice\n");
        }
    }
}

//  Write a program to Create mini library system

#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {

    struct Book b[100];
    int n,i;

    printf("Enter Number of Books: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {

        printf("\nBook %d\n",i+1);

        printf("Book ID: ");
        scanf("%d",&b[i].id);

        printf("Title: ");
        scanf("%s",b[i].title);

        printf("Author: ");
        scanf("%s",b[i].author);
    }

    printf("\nLibrary Records\n");

    for(i=0;i<n;i++) {

        printf("\nBook ID : %d",b[i].id);
        printf("\nTitle   : %s",b[i].title);
        printf("\nAuthor  : %s\n",b[i].author);
    }

    return 0;
}

//  Write a program to Create mini employee management system 

#include <stdio.h>

struct Employee {

    int id;
    char name[50];
    float salary;

};

int main() {

    struct Employee e[100];

    int n,i;

    printf("Enter Number of Employees: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {

        printf("\nEmployee %d\n",i+1);

        printf("ID: ");
        scanf("%d",&e[i].id);

        printf("Name: ");
        scanf("%s",e[i].name);

        printf("Salary: ");
        scanf("%f",&e[i].salary);

    }

    printf("\nEmployee Details\n");

    for(i=0;i<n;i++) {

        printf("\nID : %d",e[i].id);
        printf("\nName : %s",e[i].name);
        printf("\nSalary : %.2f\n",e[i].salary);

    }

    return 0;
}

// Write a program to Develop complete mini project using arrays, strings and functions.

#include <stdio.h>

struct Student {

    int roll;
    char name[50];
    float marks;

};

struct Student s[100];
int n=0;

void addStudent() {

    printf("Roll: ");
    scanf("%d",&s[n].roll);

    printf("Name: ");
    scanf("%s",s[n].name);

    printf("Marks: ");
    scanf("%f",&s[n].marks);

    n++;

}

void displayStudent() {

    int i;

    printf("\nStudent Records\n");

    for(i=0;i<n;i++) {

        printf("\nRoll : %d",s[i].roll);
        printf("\nName : %s",s[i].name);
        printf("\nMarks : %.2f\n",s[i].marks);

    }

}

void searchStudent() {

    int roll,i;

    printf("Enter Roll Number: ");
    scanf("%d",&roll);

    for(i=0;i<n;i++) {

        if(s[i].roll==roll) {

            printf("\nRecord Found");
            printf("\nName : %s",s[i].name);
            printf("\nMarks : %.2f\n",s[i].marks);

            return;
        }

    }

    printf("Record Not Found\n");

}

int main() {

    int choice;

    while(1) {

        printf("\n===== Student Management =====\n");
        printf("1.Add Student\n");
        printf("2.Display Students\n");
        printf("3.Search Student\n");
        printf("4.Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudent();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");

        }

    }

}