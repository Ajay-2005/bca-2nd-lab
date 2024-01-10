#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    int j;
    for ( j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(&arr[j], &arr[i]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main() {
    
    int i;
    int arr[10];
    printf("Enter five elements:");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    quicksort(arr, 0, 4);

    printf("Sorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

