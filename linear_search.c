#include<stdio.h>
int main(){
	int arr[10];
	int i,search,j,flag;
	int n=5;
	
	printf("Enter %d number",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a search");
	scanf("%d",&search);
	for(j=0;j<5;j++){
		if(arr[j]==search){
			printf(" The value found at position:%d",j);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("the value not found");
    }

}

