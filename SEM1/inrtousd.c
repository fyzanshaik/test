#include <stdio.h>

int main()
{
	int rupees;
	float usd;
	printf("Enter rupees to convert in USD: ");
	scanf("%d", &rupees);
	usd = rupees * 0.012;
	printf("In USA it is %fDOLLARS\n",usd);

}