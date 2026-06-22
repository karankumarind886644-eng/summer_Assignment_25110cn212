// Write a program to Find first non-repeating character

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[str[i]] == 1) {
            printf("First Non-Repeating Character: %c", str[i]);
            break;
        }
    }

    return 0;
}

// Write a program to Find first repeating character

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;

        if(freq[str[i]] == 2) {
            printf("First Repeating Character: %c", str[i]);
            break;
        }
    }

    return 0;
}

//  Write a program to Check anagram strings.  

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if(strlen(str1) != strlen(str2)) {
        printf("Not Anagram");
        return 0;
    }

    for(int i = 0; str1[i]; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for(int i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}

//  Write a program to Find maximum occurring character

#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char ch;

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum Occurring Character: %c\n", ch);
    printf("Frequency: %d", max);

    return 0;
}