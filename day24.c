// /Write a program to Check string rotation. 

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not a rotation.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2))
        printf("String is a rotation.\n");
    else
        printf("String is not a rotation.\n");

    return 0;
}

//  Write a program to Compress a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);2

    int count = 1;
    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        while(i < len - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        printf("%c%d", str[i], count);
        count = 1;
    }

    return 0;
}

//  Write a program to Find longest word. 

#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[50], word[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }

    printf("Longest Word: %s\n", longest);

    return 0;
}

//  Write a program to Remove duplicate character


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        int flag = 0;

        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("%c", str[i]);
    }

    return 0;
}

