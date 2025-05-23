//Array sorting
#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int n, int type, int order) {
    int i, j, temp;
    int shouldSwap;

    if (type == 1) {
        // Bubble Sort
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                shouldSwap = (order == 1) ? (arr[j] > arr[j + 1]) : (arr[j] < arr[j + 1]);
                if (shouldSwap) {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

    } else if (type == 2) {
        // Selection Sort
        for (i = 0; i < n - 1; i++) {
            int selected = i;
            for (j = i + 1; j < n; j++) {
                if ((order == 1 && arr[j] < arr[selected]) || (order == 2 && arr[j] > arr[selected])) {
                    selected = j;
                }
            }
            temp = arr[i];
            arr[i] = arr[selected];
            arr[selected] = temp;
        }

    } else if (type == 3) {
        // Insertion Sort
        for (i = 1; i < n; i++) {
            temp = arr[i];
            j = i - 1;

            while (j >= 0 && ((order == 1 && arr[j] > temp) || (order == 2 && arr[j] < temp))) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = temp;
        }

    } else {
        printf("Invalid sorting type. Use 1, 2, or 3.\n");
        exit(1);
    }
}

int main() {
    int n, type, order; // n= number of elemnts.     

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nChoose sorting algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n");
    printf("Your choice: ");
    scanf("%d", &type);

    printf("\nChoose sorting order:\n");
    printf("1. Ascending\n2. Descending\n");
    printf("Your choice: ");
    scanf("%d", &order);

    sort(arr, n, type, order);

    printf("\nSorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
