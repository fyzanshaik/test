#include <stdio.h>

void main()
{
	int a,b,gcd,lcm,i;
	printf("enter two nums: ");
	scanf("%d %d",&a,&b);
	for(i = 1;i<=a && i <= b;i++){
		if(a%i ==0 && b % i == 0){
			gcd = i;
		}
	}
	lcm = a * b /gcd;
	printf("gcd = %d and lcm = %d",gcd,lcm);
}