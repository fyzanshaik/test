#include <stdio.h>
#include <stdlib.h> 3

struct node {
    int data;
    struct node *link;
};
struct node *first = NULL;

void create();
void display();
void insbeg();
int c=0;
int main() {
    int choice;
    char option = 'y';

    printf("Linked List Operations:\n");
    printf("1. Create a new node\n");
    printf("2. Insert at the beginning\n");
    printf("3. Display the linked list\n");
    printf("4. Exit\n");

    while (option == 'y') {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create();
                break;
            case 2:
                insbeg();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
        
    }
    return 0;
}

void create()
{
    struct node *newnode,*current;
    char option = 'y';
    while(option=='y')
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newnode->data);
        if(first==NULL)
            first=current=newnode;
        else
        {
            current->link= newnode;
            current = newnode;
        }
            
        printf("Do you want to continue: ");
        scanf(" %c",&option);
    }
}

void display()
{
    struct node *temp;
    temp =  first;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->link;
    }
}
void insbeg()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data: ");
    scanf("%d",&newnode->data);
    newnode->link = first;
    first = newnode;
    c++;
}

void insend() {
    struct node *newnode, *current;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->link = NULL;

    if (first == NULL) {
        first = current = newnode;
    } else {
        current->link = newnode;
        current = newnode;
    }
}

void insmid() { 
    struct node *newnode, *temp, *prev;
    newnode = (struct node *)malloc(sizeof(struct node));
     int pos;
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->link = NULL;
    
	printf("Enter the position to insert (1 to %d): ", c + 1);
    scanf("%d", &pos);
    
    if (pos == 1) {
        newnode->link = first;
        first = newnode;
    } else {
        temp = first;
        prev = NULL;
        int i = 1;
        while (i < pos) {
            prev = temp;
            temp = temp->link;
            i++;
        }
        prev->link = newnode;
        newnode->link = temp;
    }

    c++;
}

void delbeg() {
    if (first == NULL) {
        printf("The list is empty. Deletion failed.\n");
        return;
    }

    struct node *temp;
    temp = first;
    first = first->link;
    free(temp);
    c--;
}

void delend() {
    if (first == NULL) {
        printf("The list is empty. Deletion failed.\n");
        return;
    }

    struct node *temp, *prev;
    temp = first;
    prev = NULL;

    while (temp->link != NULL) {
        prev = temp;
        temp = temp->link;
    }

    if (prev == NULL) {
        first = NULL;
    } else {
        prev->link = NULL;
    }

    free(temp);
    c--;
}

void delmid() {
    struct node *temp, *prev;
    
    if (first == NULL) {
        printf("The list is empty. Deletion failed.\n");
        return;
    }

    int pos;
    printf("Enter the position to delete (1 to %d): ", c);
    scanf("%d", &pos);


    temp = first;
    prev = NULL;
    int i = 1;

    while (i < pos) {
        prev = temp;
        temp = temp->link;
        i++;
    }

    if (prev == NULL) {
        first = temp->link;
    } else {
        prev->link = temp->link;
    }

    free(temp);
    c--;
}


