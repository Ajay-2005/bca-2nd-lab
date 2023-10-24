#include <stdio.h>

int main() {
    int nums[5];

    int start = 0,i,search,mid,result;
    int end = 4;
	printf("Enter a sorted array:\n");
	for(i = 0; i < 5; i++){
		scanf("%d",&nums[i]);
	}

    printf("Enter a number to find its position: \n");
    scanf("%d", &search);

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (nums[mid] == search) {
            result = mid;
            break; 
        } else if (nums[mid] < search) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (result != -1) {
        printf("The position of element in the array is %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}

