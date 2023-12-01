#include<stdio.h>

#define size 5

int top = -1;

int stack[size];

void push(int value) {
    if (top == size - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++top] = value;
        printf("%d inserted into stack\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

void display() {
    int i;
    printf("Elements of the stack:\n");
    for (i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice;
    int value;
    int ch = 1;

    while (ch == 1) {
        printf("Enter your choice:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push:");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1) {
                    printf("%d popped from stack\n", value);
                }
                break;

            case 3:
                display();
                break;
        }

        printf("Do you want to continue (1/0): ");
        scanf("%d", &ch);
    }

    return 0;
}

