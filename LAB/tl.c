#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *link;
}; struct node *first = NULL;

void create();
void display();
void insbeg();
void insmid();
void insend();


void main(){
	create();
	display();
	insbeg();
	display();
	insmid();
	display();
	insend();
	display();
}

void create()
{
	char option = 'y';
	while(option=='y')
	{
		struct node *newnode,*current;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("Enter data: ");
	scanf("%d",&newnode->data);
	newnode->link = NULL;
	
	if(first==NULL){
		first = current = newnode;
	}
	else{
		current->link = newnode;
		current = newnode;
	}
	printf("More?: ");
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
	if(first==NULL){
		printf("NO ll");
	}
	else{
		newnode = (struct node*)malloc(sizeof(struct node));
		printf("Enter data: ");
		scanf("%d",&newnode->data);
		newnode->link = NULL;
		newnode->link = first;
		first = newnode;
	}
}

void insend() {
    struct node *newnode, *temp, *current;
    if (first == NULL) {
        printf("Empty linked list.\n");
    } else {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->link = NULL;
        
        temp = first;
        while (temp->link != NULL) {
            temp = temp->link;
        }
        
        temp->link = newnode;
    }
}


void insmid() {
    struct node *newnode, *current;
    int pos, i;
    if (first == NULL) {
        printf("Empty linked list.\n");
    } else {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->link = NULL;
        printf("Enter position: ");
        scanf("%d", &pos);
        
        current = first;
        for (i = 0; i < pos - 1 && current != NULL; i++) {
            current = current->link;
        }

        if (current == NULL) {
            printf("Position out of range.\n");
        } else {
            newnode->link = current->link;
            current->link = newnode;
        }
    }
}

void delbeg()
{
	struct node *temp;
	if(first==NULL){
		printf("NO ll");
	}
	else{
		temp = first;
		first = temp->link;
		printf("Deleted data is %d \n",temp->data);
		free(temp);
	}
}

void delmid()
{


}























