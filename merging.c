#include <stdio.h>

int main() {
    int size1, size2, arr1[20], arr2[20], merge[40], i, k, j, key,temp;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);

    printf("Enter the values of the first array: ");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }

    k = i;

    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    printf("Enter the values of the second array: ");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
        merge[k] = arr2[i];
        k++;
    }

    printf("The new array after merging : ");
    for (i = 0; i < k; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}

