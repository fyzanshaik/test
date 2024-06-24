#include <stdio.h>

int main() {
	int t1,t2,sum,n;
	printf("Enter N: ");
	scanf("%d", n);
	t1 = 0 ;
	t2 = 1 ;
	sum = t1 + t2;

	while (sum <= n) {
		printf("\n%d\n", sum);
		t1 = t2;
		t2 = sum;
		sum = t1 + t2; 
	}
}