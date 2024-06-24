#include <stdio.h>

void main()
{
	int a,b,c,number,count; //declaration
	printf("Enter the number of fibonacci numbers you want to print: ");
	scanf("%d",&number);
	a = 0; //initialization //1st element
	b = 1;//2nd element
	printf("The first %d fibonacci numbers are: \n",number);
	printf("%d %d ",a,b);
	count = 2;
	while (count < number) {
		c = a + b;
		printf(" %d",c);
		count++;
		a = b;
		b = c;
	}
}