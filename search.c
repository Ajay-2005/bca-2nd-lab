#include <stdio.h>

int main() {
    int arr[50][50];
    int rows,cols;
    int i,j,search_number;
    printf("Enter the number of rows and cols:\n");
    scanf("%d %d",&rows,&cols);
    printf("Enter the elements of the array:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the element to find the position:\n");
    scanf("%d",&search_number);
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            if(arr[i][j]==search_number){
                printf("the element found at %d %d",i,j);
            }
        }
    }
    return 0;
}
