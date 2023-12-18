#include<stdio.h>

int main(){
	int arr[5],i,j,temp;
	int limit=5;
	printf("Enter any five elements :");
	for(i=0;i<limit;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<limit-1;i++){
		for(j=0;j<limit-i-1;j++){
			if(arr[j+1]<arr[j]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}
		}
	}
	printf("Sorted array:\n");
	for(i=0;i<limit;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
