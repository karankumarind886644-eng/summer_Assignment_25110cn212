find the missing number in arrary

#include <stdio.h>


int findMissing(int arr[], int n) {
    int total = (n + 1) * (n + 2) / 2; // Sum of 1 to n+1
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    return total - sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int missing = findMissing(arr, n);
    printf("Missing number is: %d\n", missing);
    
    return 0;
}




// find maximum frequency element

#include <stdio.h>

int maxFrequencyElement(int arr[], int n) {
    int maxCount = 0, element = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    printf("Element with maximum frequency: %d (appears %d times)\n", element, maxCount);
    return element;
}

int main() {
    int arr[] = {1, 3, 2, 1, 4, 1, 3, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    maxFrequencyElement(arr, n);

    return 0;
}




// find pair with given sum

#include <stdio.h>

void findPair(int arr[], int n, int target) {
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pair found with sum %d\n", target);
    }
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nTarget sum: %d\n", target);
    findPair(arr, n, target);
    
    return 0;
}



// remove duplicate form array

#include <stdio.h>


int removeDuplicates(int arr[], int n) {
    int temp[n];
    int j = 0;

    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            temp[j++] = arr[i];
        }
    }

    
    for (int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }

    return j; 
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    int newSize = removeDuplicates(arr, n);

    printf("\nArray after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
