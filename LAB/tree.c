#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *create();
void preorder(struct node *);
void inorder(struct node *);
void postorder(struct node *);
void printTree(struct node *, int);

int main() {
    struct node *root = create();

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    printf("Tree:\n");
    printTree(root, 0);
    
    return 0;
}

struct node *create() {
    int x;
    struct node *newnode;
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);

    if (x == -1) {
        return NULL;
    }

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    printf("Enter left child of %d:\n", x);
    newnode->left = create();
    printf("Enter right child of %d:\n", x);
    newnode->right = create();

    return newnode;
}

void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void printTree(struct node *root, int level) {
    if (root != NULL) {
        printTree(root->right, level + 1);
        for (int i = 0; i < level; i++) {
            printf("    ");
        }
        printf("%d\n", root->data);
        printTree(root->left, level + 1);
    }
}

