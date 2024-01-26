
#include <stdio.h>
int binarySearch(int arr[],int left,int right,int search){
    if(right>=left){
        int mid=(left+right)/2;
        if(arr[mid]==search){
            return mid;
        }
        else if(arr[mid]>search){
            return binarySearch(arr,left,mid-1,search);
        }
        else{
            return binarySearch(arr,mid+1,right,search);
        }

    }
}
int main() {
    int arr[10],search,i,left=0,right=4,result=-1;
    printf("Enter a sorted array:\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter a value to search:\n");
    scanf("%d",&search);
    result=binarySearch(arr,left,right,search);
    if(result==-1){
        printf("value not found");
    }
    else{
        printf("the value found at %d",result);
    }

    return 0;
}
