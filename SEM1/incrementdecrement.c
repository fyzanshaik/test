#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b,c;
	// Post increment = a++ or b++/ pre increment = ++a or ++b
	a = 1 , b = 2;
	c = a++ + b++;
	printf("c = %d\n",c);
	printf("a = %d b = %d", a,b);


}