#include <stdio.h>
#include <string.h>

void swapStrings(char *a, char *b) {
    char temp[100];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void exchangeSort(char arr[][100], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                swapStrings(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int n, i;
    char list[100][100];

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:",n);
    for (i = 0; i <= n; i++) {
        gets(list[i]);
    }

    exchangeSort(list, n);

    printf("Strings in sorted order:\n");
    for (i = 0; i <= n; i++) {
        printf("%s\n", list[i]);
    }

    return 0;
}

