#include <stdio.h>
struct node
 {
	int data;
	struct node* link;
}n1,n2,n3;
void main()
{
	n1.data = 10;
	n2.data = 20;
	n3.data = 30;
	n1.link = &n2;
	n2.link = &n3;
	n3.link = NULL;
	printf("%4d", n1.data);
	printf("%4d", n1.link->data);
	printf("%4d", n1.link->link->data);
}
