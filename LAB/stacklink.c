#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node *link;
}; struct node *top = NULL;

void push(int);
void pop();
void peek();
void display();

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
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
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

void push(int x) {
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->link = top;
    top = newnode;
}

void pop() {
	struct node *temp;
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        temp = top;
        printf("deleted element is %d",temp->data);
        top = temp->link;
        free(temp);
    }
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element: %d\n", top->data);
    }
}

void display() {
	struct node * temp;
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
    temp = top;
        printf("Stack elements:\n");
        while(temp!=NULL){
        	printf("%d",temp->data);
        	temp = temp->link;
        	printf("\n");
        }
    }
}

