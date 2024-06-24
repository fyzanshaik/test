#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){
	int result;
	if(num1 > num2){
		result = num1;
		printf("%d is greater", result);
	} else {
		result = num2;
		printf("%d is greater", result);
	}
	return result;
}
int main()
{
	max(122, 20);


	return 0;
}