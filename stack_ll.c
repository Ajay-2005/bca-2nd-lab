#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *temp;
struct node *head = NULL;

void push() {
    int value;
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed");
    } else {
        printf("Enter element to push: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        } else {
            newnode->next = head;
            head = newnode;
        }
    }
    printf("%d pushed into the stack\n", newnode->data);
}

void pop() {
    int item;
    temp = head;
    if (head == NULL) {
        printf("\nStack Underflow !!");
    } else {
        item = head->data;
        temp = head;
        head = head->next;
        free(temp);
        printf("%d popped from the stack\n", item);
    }
}

void display() {
    temp = head;
    if (head == NULL) {
        printf("\nStack is empty.");
    } else {
        printf("\nPrinting stack elements:\n");
        while (temp != NULL) {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}

int main() {
    int choice = 0;

    printf("\n**Stack Using Linked List**");
    while (choice != 4) {
        printf("\n\nChoose an option:");
        printf("\n1.Push.\n2.Pop.\n3.Show.\n4.Exit.");
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nPlease enter a valid choice.");
        }
    }

    return 0;
}

