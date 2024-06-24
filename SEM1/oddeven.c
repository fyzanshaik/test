#include <stdio.h> //Start this program while taking input from keyboard and dispay output on monitor 
#include <stdlib.h>
int main() 
{int a;printf("Enter number to check: ");scanf("%d", &a);if (a%2 == 0) {
		printf("%d is EVEN number\n",a );
	}else {
		printf("%d is ODD number\n",a );
	}
}