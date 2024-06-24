#include<stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

struct node {
   int data;
   struct node *pointer;
};  //Declaring a node data type and its structure
struct node *first = NULL; //Global variable declaration
void display();
int main() {
    struct node *newnode,*current;
    srand(time(NULL));

    int i;int numberofNodes = (rand()%100 + 1);
    printf("%d",numberofNodes);
    printf("\n");

    for(i=0;i<numberofNodes;i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        int randomNum = (rand() % 100) + 1;

        newnode->data = randomNum;
        //We are using -> instead of . as newnode is a pointer that consists / points to node size memory (with data);
        newnode->pointer=NULL;
        if(first==NULL)
        {
            first = current = newnode;
        }
        else
        {
            current->pointer=newnode;
            current = newnode;

        }

    }
    display();




    return 0;
}
void display()
    {
        struct node *temp;
        if(first == NULL)
        {
            printf("No");
        }
        else
        {
            printf("Elements are: \n");
            temp = first;
            while(temp!=NULL)
            {
                printf("%d \n",temp->data);
                temp = temp->pointer;
            }
            printf("\n");
        }

    }
