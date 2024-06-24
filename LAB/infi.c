#include <stdio.h>
#include <ctype.h>
#define MAX 10

char stack[MAX];
int top = -1;

void push(char);
char pop();
int priority(char);

int main() {
    char exp[20], x;
    int i;
    printf("Enter the expression: \n");
    scanf("%s", exp);
    for (i = 0; exp[i] != '\0'; i++) { 
        if (isalpha(exp[i])) {
            printf("%c", exp[i]);
        } else if (exp[i] == '(') {
            push(exp[i]);
        } else if (exp[i] == ')') {
            while ((x = pop()) != '(') { // Corrected the parenthesis placement
                printf("%c", x);
            }
        } else {
            while (top != -1 && priority(stack[top]) >= priority(exp[i])) {
                printf("%c", pop());
            }
            push(exp[i]);
        }
    }
    while (top != -1) 
    { 
        printf("%c", pop());
    }
	printf("\n");
    return 0;
}

void push(char x) {
    if (top == MAX - 1) {
        printf("Stack is full.\n");
    } else {
        stack[++top] = x;
    }
}

char pop() {
    if (top == -1) {
        return '\0'; // Return a null character to  indicate stack underflow
    } else {
        return stack[top--];
    }
}

int priority(char c) {
    if (c == '*' || c == '/') {
        return 2;
    } else if (c == '+' || c == '-') {
        return 1;
    } else {
        return 0;
    }
}

