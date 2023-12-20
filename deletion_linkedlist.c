#include<stdio.h>
#include<stdlib.h>  
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

   
    if (pos == 1) {
        temp = head;
        head = head->next;
        free(temp);
    } else {
        temp = head;
        i = 1;
        while (temp != NULL && i < pos - 1) {
            temp = temp->next;
            i++;
        }

        struct node *nextNode = temp->next->next;
        free(temp->next);
        temp->next = nextNode;
    }

    traverselist(head);


    temp = head;
    while (temp != NULL) {
        struct node *nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}

