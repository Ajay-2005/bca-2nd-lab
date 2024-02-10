
#include <stdio.h>
#define MAX_SIZE 5
int front=-1;
int rear=-1;
int queue[MAX_SIZE];
int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % MAX_SIZE == front;
}
void enequeue(int element){
    if(isFull()){
        printf("the queue is full\n");
    }
    if(isEmpty){
        front=0;
    }

    rear=(rear+1)%MAX_SIZE;
    queue[rear]=element;
    printf("the element  %d inserted into the stack\n",element);
}
void  dequeue(){
    int element;
    if (isEmpty()) {
        printf("queue is empty");
    }
    else{
        element=queue[front];
        front=(front+1)%MAX_SIZE;
        printf("the element  %d popped from the stack\n",element);

    }
}
void display() {
	int i;
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Circular Queue: ");
    for ( i = front; i != (rear + 1) % MAX_SIZE; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}
void main() {

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
