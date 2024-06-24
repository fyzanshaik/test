#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	printf("Enter number to compare: \n");
	scanf("%d %d",&a,&b);
	if (a>b) {
		printf("%d is greater than %d",a,b);
	}else if (a ==b) {
		printf("%d is equal to %d\n",a,b);
	}else {
		printf("%d is less than %d\n",a,b );
	}

}