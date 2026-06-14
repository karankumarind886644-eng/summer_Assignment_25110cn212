write a program to merge array

#include <stdio.h>


void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i;
    
    
    for (i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {
        merged[i++] = arr2[j];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];
    
    mergeArrays(arr1, n1, arr2, n2, merged);
    
    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    
    return 0;
}


// write a program to union of array

#include <stdio.h>


int exists(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) return 1;
    }
    return 0;
}

int unionArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int k = 0;

    
    for (int i = 0; i < n1; i++) {
        if (!exists(result, k, arr1[i])) {
            result[k++] = arr1[i];
        }
    }

    
    for (int i = 0; i < n2; i++) {
        if (!exists(result, k, arr2[i])) {
            result[k++] = arr2[i];
        }
    }

    return k; 
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[n1 + n2]; // maximum possible size

    int size = unionArrays(arr1, n1, arr2, n2, result);

    printf("Union of arrays: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}


// write a program to insertion of array

#include <stdio.h>

// Function to insert element at position
int insertElement(int arr[], int n, int element, int pos) {
    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    return n + 1; // new size
}

int main() {
    int arr[20] = {10, 20, 30, 40, 50}; // extra space for insertion
    int n = 5; // current size
    int element = 25;
    int pos = 2; // position (0-based index)

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    n = insertElement(arr, n, element, pos);

    printf("\nArray after insertion of %d at position %d: ", element, pos);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}



// write a program to find common element

#include <stdio.h>

// Function to find common elements
void findCommon(int arr1[], int n1, int arr2[], int n2) {
    printf("Common elements: ");
    int found = 0;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already printed
                int duplicate = 0;
                for (int k = 0; k < i; k++) {
                    if (arr1[k] == arr1[i]) {
                        duplicate = 1;
                        break;
                    }
                }
                if (!duplicate) {
                    printf("%d ", arr1[i]);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    findCommon(arr1, n1, arr2, n2);

    return 0;
}
