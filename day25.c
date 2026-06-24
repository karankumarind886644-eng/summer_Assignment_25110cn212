// Write a program to Merge two sorted arrays. 

#include <stdio.h>

int main() {
    int a[] = {1, 3, 5, 7};
    int b[] = {2, 4, 6, 8};

    int n1 = 4, n2 = 4;
    int c[20];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    printf("Merged Array: ");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);

    return 0;
}


//  Write a program to Find common characters in string

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common Characters: ");

    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j]) {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}


// Write a program to Sort names aalphabetically

#include <stdio.h>
#include <string.h>

int main() {
    char names[5][20], temp[20];

    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++)
        scanf("%s", names[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("\nNames in Alphabetical Order:\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", names[i]);

    return 0;
}


//  Write a program to Sort words by length.

#include <stdio.h>
#include <string.h>

int main() {
    char words[5][20], temp[20];

    printf("Enter 5 words:\n");
    for (int i = 0; i < 5; i++)
        scanf("%s", words[i]);

    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords Sorted by Length:\n");
    for (int i = 0; i < 5; i++)
        printf("%s\n", words[i]);

    return 0;
}