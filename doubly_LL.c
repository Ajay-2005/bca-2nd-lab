#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void creation(struct node **head) {
    struct node *temp = *head, *newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = NULL;

    if (*head == NULL) {
        *head = newnode;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}

void displayInForward(struct node *head) {
    printf("Doubly linked list traversal in forward direction:\n");
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
}

void displayInBackward(struct node *head) {
    struct node *temp = head;

    printf("Doubly linked list traversal in backward direction:\n");

    while (temp != NULL && temp->next != NULL) {
        temp = temp->next;
    }

    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->prev;
    }
}

int main() {
    struct node *head = NULL;
    int choice;

    do {
        printf("\n1. Create a node\n");
        printf("2. Display in forward direction\n");
        printf("3. Display in backward direction\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                creation(&head);
                break;
            case 2:
                displayInForward(head);
                break;
            case 3:
                displayInBackward(head);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);


    while (head != NULL) {
        struct node *temp = head;
        head = head->next;
        free(temp);
    }

    head = NULL;

    return 0;
}

