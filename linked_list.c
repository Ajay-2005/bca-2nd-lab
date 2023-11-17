#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node* head = NULL;
    struct node* newNode = NULL;
    struct node* temp = NULL;
    int n,i;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	for(i=0;i<n;i++){
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
     

    temp = head;

    printf("The elements of the linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
       
        temp = temp->next;
    }


    temp = head;
    while (temp != NULL) {
        struct node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}

