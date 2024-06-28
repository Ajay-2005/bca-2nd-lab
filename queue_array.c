#include<stdio.h>
#define size 5
int queue[5];
int front=-1;
int rear=-1;

void enequeue(int value){
	if(rear==size-1){
		printf("queue is full\n");
	}
	else if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=value;
	}
	else{
		rear++;
		queue[rear]=value;
	}
}
void dequeue(){
    if(front==-1 && rear==-1){
		  printf("queue is empty\n");
	  }
    else if(front==rear){
      front=rear=-1;
    }
    else{
      printf("%d removed from queue \n",queue[front]);
      front++;
    }
}
void display(){
    int i;
    printf("Elements of the queue:\n");
    for(i=front;i<=rear;i++){
        printf("%d\n",queue[i]);

    }
}
int main(){
    int value,choice;
    int ch=1;
    while(ch==1){

    printf("Enter your choice:\n 1 for insertion \n 2 for deletion \n 3 for display\n");
    scanf("%d",&choice);
    switch(choice){
      case 1:
            printf("Enter value to insert:");
            scanf("%d",&value);
            enequeue(value);
            break;
      case 2:
            dequeue();
            break;
      case 3:
            display();
            break;
    }
    printf("do you want to continue (1/0):");
    scanf("%d",&ch);

    }
}

