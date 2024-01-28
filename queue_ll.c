#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct queue {
    struct node *front, *rear;
};

struct node *createNode(int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

struct queue *createQueue() {
    struct queue *queue = (struct queue *)malloc(sizeof(struct queue));
    queue->front = queue->rear = NULL;
    return queue;
}

void enqueue(struct queue *queue, int data) {
    struct node *newnode = createNode(data);
    if (queue->rear == NULL) {
        queue->front = queue->rear = newnode;
        return;
    } else {
        queue->rear->next = newnode;
        queue->rear = newnode;
    }
}

int dequeue(struct queue *queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
        return -1; 
    } else {
        struct node *temp = queue->front;
        int data = temp->data;
        queue->front = temp->next;
        free(temp);
        return data;
    }
}

void printQueue(struct queue *queue) {
    if (queue->front == NULL) {
        printf("Queue is empty\n");
    } else {
        struct node *temp = queue->front;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    struct queue *myQueue = createQueue();
    int choice, data;

    do {
        printf("Enter your choice:\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Print Queue\n");
        printf("4.Exit\n");

        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(myQueue, data);
                break;
            case 2:
                data = dequeue(myQueue);
                if (data != -1) {
                    printf("Dequeued element: %d\n", data);
                }
                break;
            case 3:
                printf("Current Queue: ");
                printQueue(myQueue);
                break;
            case 4:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

