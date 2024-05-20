#include<stdio.h>
void radix(int[], int);
int get_max(int[], int);

int main() {
    int i, a[100];
    int n;

    printf("Enter the number of items: ");
    scanf("%d", &n);

    printf("Enter %d data items:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Data before sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    radix(a, n);

    printf("\nData after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

// Function to get the maximum element from the array
int get_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Function to perform Radix Sort
void radix(int arr[], int n) {
    int bucket[10][100], count[10];
    int i, j, k, rem, div = 1, max = get_max(arr, n);

    while (max / div > 0) {
        // Initialize count array
        for (i = 0; i < 10; i++) {
            count[i] = 0;
        }

        // Count occurrences of digits
        for (i = 0; i < n; i++) {
            rem = (arr[i] / div) % 10;
            bucket[rem][count[rem]] = arr[i];
            count[rem]++;
        }

        // Collect elements from the bucket back to the original array
        int index = 0;
        for (i = 0; i < 10; i++) {
            for (j = 0; j < count[i]; j++) {
                arr[index++] = bucket[i][j];
            }
        }
        div *= 10; // Move to the next digit
    }
}
