#include <stdio.h>

int main() {
    int arr[10][10], arr2[10][10], rows, cols, i, j, k = 1;
    printf("Enter the orders of the matrix:");
    scanf("%d %d", &rows, &cols);
    printf("Enter the elements of the matrix:");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The given matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    arr2[0][0] = rows;
    arr2[0][1] = cols;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] != 0) {
                arr2[k][0] = i;
                arr2[k][1] = j;
                arr2[k][2] = arr[i][j];
                k++;
            }
        }
    }

    arr2[0][2] = k - 1;

    printf("The triplet representation of a matrix:\n");
    for (i = 0; i < k; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

