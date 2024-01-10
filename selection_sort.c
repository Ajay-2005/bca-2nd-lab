#include<stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int arr[10], limit, i, j,int min;

    printf("Enter the limit of array:\n");
    scanf("%d", &limit);

    printf("Enter %d numbers:\n", limit);
    for(i = 0; i < limit; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < limit; i++) {
        min=i;
        for(j = i + 1; j < limit; j++) {
            if(arr[j] < arr[min]) {
                min=j;
               
            }
        }
        swap(&arr[min],&arr[i]);
    }

    printf("Sorted array:\n");
    for(i = 0; i < limit; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

