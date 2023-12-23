#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void traverselist(struct node *temp) {
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void removeNode(struct node **head, int pos) {
	int i;
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = *head;
    struct node *prev = NULL;

    
    if (pos == 1) {
        *head = temp->next;
        free(temp);
        return;
    }


    for (i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    
    prev->next = temp->next;
    free(temp);
}

int main() {
    struct node *head = NULL;
    struct node *newNode = NULL;
    struct node *temp = NULL;
    int n, i, pos;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));

        if (newNode == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter data: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if (head == NULL) {
            head = temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
	printf("The element of linked list");
    traverselist(head);

    printf("Enter position of data to remove: ");
    scanf("%d", &pos);

    removeNode(&head, pos);
	printf("The element of linked list after deleting");
    traverselist(head);

    return 0;
}

