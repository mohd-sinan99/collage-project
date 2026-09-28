#include<stdio.h>
#include <stdlib.h>
#define MAX 5 
int stack[MAX];
int top =-1;
void push(int value){
    if (top == MAX - 1) {
        printf("strack Overflow! cannot push %d, stackis full.\n", value);
    }
    else {
        top++;
        stack[top] = value;
        printf("succesfully pushed %d onto the stack.\n", value);
    }
}
void pop() {
    if (top == -1) {
        printf("stack Underflow The stack is arleady empty.\n");
    } else {
        printf("popped element: %d\n", stack[top]);
        top--;
    }
}
void display() {
    if (top == -1) {
        printf("The stack is empty.\n");
    } else {
        printf("stack element (top of bottom):\n");
        for (int i = top; i >= 0; i--) {
            printf("| %d |\n", stack[i]);
        }
        printf("-----\n");
    }
}
int main() {
    int choice, value;
    while (1) {
        printf("\n--- STACK OPERATIONS ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
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
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
} 