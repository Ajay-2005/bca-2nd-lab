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

    traverselist(head);

    printf("Enter position of data to remove: ");
    scanf("%d", &pos);

   
    temp = head;
    while (temp != NULL) {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}
