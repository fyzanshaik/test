#include <stdio.h>
#include <math.h>
void main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if (a > b) {
		if (a >c) {
			printf("A is greater than  ");
		}
		else {
			printf("C is greater number among the 3");
		}
	}
	else if (a == b) {
		if (a == c) {
			printf("Numbers are equal");
		}
		
	}
	else {
		if (b > c) {
			printf("B is greater among 3");
		}
		else {
			printf("c is greater ");
		}
	}
	

}	