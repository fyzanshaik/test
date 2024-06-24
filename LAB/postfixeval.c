#include <stdio.h>
#include <ctype.h> 

#define MAX_SIZE 20

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Error: Stack overflow.\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Error: Stack underflow.\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    char exp[20];
    int n, x, y, z, i;
    printf("Enter the expression: \n");
    scanf("%s", exp);
    
    for (i = 0; exp[i] != '\0'; i++) {
        if (isdigit(exp[i])) {
            n = exp[i] - '0';
            push(n);
        } else {
            y = pop();
            if (y == -1) {
                return 1;
            }
            
            x = pop();
            if (x == -1) {
                return 1;
            }
            
            switch (exp[i]) {
                case '+': z = x + y; break;
                case '-': z = x - y; break;
                case '*': z = x * y; break;
                case '/': z = x / y; break;
                case '%': z = x % y; break;
            }
            push(z);
        }
    }
    
    int result = pop();
    if (result != -1) {
        printf("Result is %d\n", result);
    }

    return 0;
}

