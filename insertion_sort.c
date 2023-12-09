#include<stdio.h>
int main(){
	int arr[5];
	int i,j,current;
	printf("Enter any five numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=4;i++){
		j=i-1;
		current=arr[i];
		while(j>=0 && arr[j]>current){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}
	printf("The array sorted in ascending order:\n");
	for(i=0;i<5;i++){
		printf("%d \n",arr[i]);
	}

}
